#include "ft_printf.h"

static int	len_number(unsigned int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int ft_putnbr_u(unsigned int nb)
{
    int i = len_number(nb);
    if (nb >= 10)
    {
        ft_putnbr_u(nb / 10);
        nb = nb % 10;
    }
    if (nb < 10)
        ft_putchar(nb + 48);

    return (i);
}