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
        str = ft_strlcpy(str, "(null)", 6);
    while (str[len])
    {
        ft_put_c(str[len]);
        len++;
    }
    free(str);
    return (len);
}