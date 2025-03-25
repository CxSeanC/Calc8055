#include "calculator.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

double vulnerable_calculate(const char *expr) {
    char buffer[128];
    strcpy(buffer, expr);
    double a, b;
    char op;
    sscanf(buffer, "%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b == 0 ? 0 : a / b;
        default: return 0;
    }
}