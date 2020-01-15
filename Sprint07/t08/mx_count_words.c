#include <stdlib.h>
#include <stdbool.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
void mx_strdel(char **str);

int mx_count_words(const char *str, char c) {
    bool state = true;
    unsigned wordcount = 0;
    int i = 0;
    
    if (str == NULL)
        return -1;
    else {
        while (str[i]) {
            if (str[i] == c)
                state = true;
            else if (state == true) {
                state = false;
                ++wordcount;
            }
            ++i;
        }
        return wordcount;
    }
}
