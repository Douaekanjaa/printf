#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int checker(const char *format, va_list args, int *i);
int _putnbr(int nb, int *counter);
int _putstr(char *str);
void _putu(unsigned int n, int base, int *counter);
void _putoct(unsigned int num, int *res);
void _puthex(unsigned int n, int *counter);
int handles_s(va_list args, int *res);
void _putHEX(unsigned int n, int *counter);
int    _putbinary(int number, int *counter);
int _reversed(va_list args);
int _strlen(const char *s);

#endif
