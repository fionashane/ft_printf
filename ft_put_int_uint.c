#include "ft_printf.h"

int ft_put_int(int n)
{
    int len;
    char *num;

    len = 0;
    num = ft_itoa(n);
    len += ft_put_str(num);
    free(num);
    return (len);
}

int ft_put_uint(unsigned int n)
{
    int len;
    char *num;

    len = 0;
    num = ft_uitoa(n);
    len += ft_put_str(num);
    free(num);
    return (len);
}