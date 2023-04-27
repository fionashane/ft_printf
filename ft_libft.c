#include "ft_printf.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

static int	ft_num_len(long n)
{
	int	num_len;

	num_len = 1;
	if (n < 0)
	{
		n *= -1;
		num_len++;
	}
	while (n > 9)
	{
		n /= 10;
		num_len++;
	}
	return (num_len);
}

static void	ft_int_to_str(long n, char *str, int *i)
{
	if (n <= 9)
		str[(*i)++] = n + '0';
	else
	{
		ft_int_to_str(n / 10, str, i);
		ft_int_to_str(n % 10, str, i);
	}
}

char	*ft_itoa(int n)
{
	int		num_digits;
	int		i;
	long	num;
	char	*str;

	num = n;
	num_digits = ft_num_len(num);
	str = (char *) malloc(sizeof(char) * (num_digits + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		str[i++] = '-';
		num *= -1;
	}
	ft_int_to_str(num, str, &i);
	str[i] = '\0';
	return (str);
}

char	*ft_uitoa(int n)
{
	int		num_digits;
	int		i;
	long	num;
	char	*str;

	num = n;
	num_digits = ft_num_len(num);
	str = (char *) malloc(sizeof(char) * (num_digits + 1));
	if (!str)
		return (NULL);
	i = 0;
	ft_int_to_str(num, str, &i);
	str[i] = '\0';
	return (str);
}