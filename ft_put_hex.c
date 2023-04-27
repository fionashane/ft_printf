#include "ft_printf.h"

int ft_put_hex(unsigned int n, char type)
{
    int len;

    len = 0;
    if (!n)
        ft_put_c('0');
    else
        len += ft_print_hex(n, type);
    return (len);
}

int ft_print_hex(unsigned int n, char type)
{
    int len;

    len = 0;
    if (n >= 16)
    {
        ft_print_ptr(n / 16);
        ft_print_ptr(n % 16);
    }
    else
    {
        if (n <= 9)
            len += ft_put_c(n + '0');
        else
            if (type == 'x')
                len += ft_put_c(n - 10 + 'a');
            if (type == 'X')
                len += ft_put_c(n - 10 + 'A');
    }
    return (len);
}