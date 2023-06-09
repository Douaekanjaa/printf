#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

int _printf(const char *format, ...);
int checker(const char *format, va_list args, int *i);
int _putnbr(int nb, int *counter);
int _putstr(char *str);
int _putbinary(unsigned int number, int *counter);

int _strlen(const char *s);

#endif
