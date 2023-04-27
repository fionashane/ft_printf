#include "ft_printf.h"

int main()
{
    int len = 0;
    char *str = "ehhloo";
    len = ft_printf("hello %s", str);
    return (0);
}