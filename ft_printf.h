#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_flag
{
    int pound;
    int zero;
    int dash;
    int space;
    int plus;
    int star;
    int width;
    int preci;
    int type;
} t_flag;

// printf
int ft_print_all(va_list args, char *str);
int ft_print_arg(va_list args, t_flag flag, char type);

// arg
int ft_print_c(char c);
int ft_print_str(const char *str);
int ft_print_ptr(const char *ptr);
int ft_print_int(int n);
int ft_print_unsigned(int n);
int ft_print_hex(int n, char is_upper);

// libft

#endif