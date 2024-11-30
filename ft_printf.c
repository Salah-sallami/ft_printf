#include "ft_printf.h"

int ft_printf(const char *foramt, ...)
{
    va_list list;
    va_start(list, foramt);
    int i = 0;
    int j = 0;

    while (foramt[i] != '\0')
    {
        if ((foramt[i] == 's' || foramt[i] == 'c' || foramt[i] == 'd' || foramt[i] == 'i' || foramt[i] == 'x' || foramt[i] == 'X' || foramt[i] == 'p' || foramt[i] == 'u' || foramt[i] == '%') && foramt[i - 1] == '%' && foramt[i + 1] == '\0')
            break;
        if ((foramt[i] == 's' || foramt[i] == 'c' || foramt[i] == 'd' || foramt[i] == 'i' || foramt[i] == 'x' || foramt[i] == 'X' || foramt[i] == 'p' || foramt[i] == 'u' || foramt[i] == '%') && foramt[i - 1] == '%')
        {
            i++;
            j--;
        }
        if ((foramt[i + 1] == 's' || foramt[i + 1] == 'c' || foramt[i + 1] == 'd' || foramt[i + 1] == 'i' || foramt[i + 1] == 'x' || foramt[i + 1] == 'X' || foramt[i + 1] == 'p' || foramt[i + 1] == 'u' || foramt[i + 1] == '%') && foramt[i] == '%')
        {
            j = j + ft_conversions(foramt[i + 1], list) - 1;
        }
        else if (foramt[i] == '%')
        {
            j--;
        }
        else  if (foramt[i] != '%')
            write(1, &foramt[i], 1);

        i++;
    }
    va_end(list);
    return (i + j);
}
