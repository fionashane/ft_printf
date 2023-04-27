#include "ft_printf.h"

int ft_put_c(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_put_str(char *str)
{
    int len;

    len = 0;
    if (!str)
        len += write(1, "(null)", 6);
    while (str[len])
        len += ft_put_c(str[len]);
    return (len);
}