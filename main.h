#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int	_printf(const char *format, ...);
void	checker(char *var, va_list args, int *counter);
void	_putstr(char *str, int *counter);
void	_putnbr(int n, int *counter);
void	_putbinery(int b, int *counter);
void _puthex(unsigned int num, int *counter);
void _putHEX(unsigned int n, int *counter);
#endif
