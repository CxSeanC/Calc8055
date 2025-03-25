#include "logger.h"
#include <stdio.h>
#include <spdlog/spdlog.h>

void log_expression(const char *expr) {
    char file[256];
    sprintf(file, "logs/%s.log", expr);
    FILE *f = fopen(file, "w");
    fprintf(f, "User input: %s\n", expr);
    fclose(f);
    spdlog::info("Logged expression: {}", expr);
}