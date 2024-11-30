#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdarg.h>

int ft_putchar(int c);
int ft_putnbr(int n);
int ft_putstr(char *s);
int ft_conversions(char c, va_list list);
int ft_hex_lowercase(unsigned int x);
int ft_hex_uppercase(unsigned int x);
int ft_hex_p(unsigned long x);
int ft_putnbr_u(unsigned int nb);
int ft_printf(const char *foramt, ...);

#endif