#include "ft_printf.h"

int ft_ptr_len(uintptr_t ptr);
int ft_print_ptr(uintptr_t ptr);

int ft_put_ptr(unsigned long long ptr)
{
    int len;

    len = 0;
    len += write(1, "0x", 2);
    if (!ptr)
        len += write(1, "0", 1);
    else
        len += ft_print_ptr(ptr);
    return (len);
}

int ft_print_ptr(uintptr_t ptr)
{
    int len;

    len = 0;
    if (ptr >= 16)
    {
        ft_print_ptr(ptr / 16);
        ft_print_ptr(ptr % 16);
    }
    else
    {
        if (ptr <= 9)
            len += ft_put_c(ptr + '0');
        else
            len += ft_put_c(ptr - 10 + 'a');
    }
    return (len);
}
/*
int ft_ptr_len(uintptr_t ptr)
{
    int len;

    len = 0;
    while (ptr)
    {
        len++;
        ptr /= 16;
    }
    return (len);
}
*/