#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

// printf
int ft_printf(const char *format, ...);
int ft_print_all(va_list args, char *str);
int ft_print_arg(va_list args, char type);

// arg
int ft_put_c(int c);
int ft_put_str(char *str);
int ft_put_ptr(unsigned long long ptr);
int ft_put_int(int n);
int ft_put_uint(unsigned int n);
int ft_put_hex(unsigned int n, char type);

// libft
size_t	ft_strlen(const char *s);
// size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);


#endif