#include <stdbool.h>
#include <stdlib.h>

void mx_printchar(char c);
static void print_newline(bool *flag);

static void print_newline(bool *flag) {
    if (*flag) {
        mx_printchar('\n');
        *flag = false;
    }
}

void mx_str_separate(const char *str, char delim) {
    int i = 0;
    bool flag = true;

    if (!str)
        return;
    else {
        while (str[i]) {
            if (str[i] == delim) {
                smart_print_newline(&flag);
            }
            else {
                mx_printchar(str[i]);
                flag = true;
            }
            i++;
        }
        smart_print_newline(&flag);
    }
}
