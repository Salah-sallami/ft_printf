#include "ft_printf.h"

int ft_hex_p(unsigned long x)
{
    int length = 0;
    char *hex;
    hex = "0123456789abcdef";
    if (x >= 16)
        length = ft_hex_p(x / 16);
    ft_putchar(hex[x % 16]);
    return (length + 1);
}