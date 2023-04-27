#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int len;
    char *str;
    va_list args;

    if (!format || !*format)
        return (0);
    str = ft_strdup(format);
    if (!str || !*str)
        return (0);
    len = 0;
    va_start(args, format);
    len = ft_print_all(args, str);
    va_end(args);
    free(str);
    return (len);
}

int ft_print_all(va_list args, char *str)
{
    int len;
    int i;
    int j;

    len = 0;
    i = 0;
    while (str[i])
    {
        if (str[i + 1] != 0 && str[i] == '%')
        {
            len += ft_print_arg(args, str[i + 1]);
            i++;
        }
        else
            len += ft_print_c(str[i]);
        i++;
    }
    return (len);
}

int ft_print_arg(va_list args, char type)
{
    int len;

    len = 0;
    if (type == '%')
        len += ft_put_c('%');
    else if (type == 'c')
        len += ft_put_c(va_arg(args, int));
    else if (type =='s')
        len += ft_put_str(va_arg(args, char *));
    else if (type == 'p')
        len += ft_put_ptr(va_arg(args, unsigned long long));
    else if (type == 'd' || type == 'i')
        len += ft_put_int(va_arg(args, int));
    else if (type == 'u')
        len += ft_put_uint(va_arg(args, unsigned int));
    else if (type == 'x' || type == 'X')
        len += ft_put_hex(va_arg(args, unsigned int), type);
    return (len);
}