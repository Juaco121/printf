#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#include <limits.h>

int _putchar(char c);
int print_char(va_list lista);
int print_percent(__attribute__((unused))va_list lista);
int print_str(va_list lista);
int _printf(const char *format, ...);
int putN(unsigned int n, unsigned int b, char *nums);
int print_int(va_list lista);
int print_unsigned(va_list lista);
#endif
