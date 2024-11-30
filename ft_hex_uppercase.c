#include "ft_printf.h"

int ft_hex_uppercase(unsigned int x)
{
    int length = 0;
    char *hex;
    hex = "0123456789ABCDEF";
    if (x >= 16)
        length = ft_hex_uppercase(x / 16);
    ft_putchar(hex[x % 16]);
    return (length + 1);
}