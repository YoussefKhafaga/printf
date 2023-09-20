#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void free_2D(char **array, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
unsigned int get_char(char c, unsigned int len);
unsigned int get_string(char *str_format, unsigned int len);
unsigned int get_percent(unsigned int len);

#endif

