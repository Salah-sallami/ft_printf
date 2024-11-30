#include "ft_printf.h"

static int len_number(int n)
{
    int len;

    len = 1;
    while (n > 9)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

int ft_putnbr(int nb)
{
    int i = 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        i = 11;
    }
    else if (nb == 2147483647)
    {
        write(1, "2147483647", 10);
        i = 10;
    }
    else
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
            i++;
        }
        i = i + len_number(nb);
        if (nb >= 10)
        {
            ft_putnbr(nb / 10);
            nb = nb % 10;
        }
        if (nb < 10)
            ft_putchar(nb + 48);
    }

    // test
    return (i);
}