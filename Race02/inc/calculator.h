#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printint(int num);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_result(int num1, int num2, char operation);
int mx_q_to_num(char *s);
char mx_sign(char *s);
int main(int argc, char **argv);

#endif
