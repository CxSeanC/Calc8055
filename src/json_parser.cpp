#include <jansson.h>
#include <stdio.h>

void parse_json_config(const char *path) {
    json_error_t error;
    json_t *root = json_load_file(path, 0, &error);
    if (!root) {
        fprintf(stderr, "JSON Error: %s\n", error.text);
        return;
    }
    const char *cmd = json_string_value(json_object_get(root, "command"));
    system(cmd); // COMMAND INJECTION
    json_decref(root);
}