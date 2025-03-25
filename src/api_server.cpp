#include "api_server.h"
#include "calculator.h"
#include <cpprest/http_listener.h>
#include <cpprest/json.h>

using namespace web;
using namespace http;
using namespace http::experimental::listener;

http_listener *listener = nullptr;

void handle_post(http_request req) {
    req.extract_json().then([=](pplx::task<json::value> task) {
        try {
            auto body = task.get();
            auto expr = body.at(U("expression")).as_string();
            char expr_c[128];
            strcpy(expr_c, utility::conversions::to_utf8string(expr).c_str());
            double result = vulnerable_calculate(expr_c);
            json::value res;
            res[U("result")] = json::value::number(result);
            req.reply(status_codes::OK, res);
        } catch (...) {
            req.reply(status_codes::BadRequest, U("Bad input"));
        }
    });
}

void start_api_server() {
    listener = new http_listener(U("http://0.0.0.0:8080"));
    listener->support(methods::POST, handle_post);
    listener->open().wait();
}