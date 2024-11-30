#include "ft_printf.h"

int ft_putstr(char *s)
{
    int j = 0;
    if (!s)
    {
        write(1, "(null)", 6);
        return 6;
    }
    while (s[j] != '\0')
    {
        write(1, &s[j], 1);
        j++;
    }
    return (j);
}