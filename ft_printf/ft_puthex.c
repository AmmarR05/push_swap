#include "ft_printf.h"

static char	*ft_get_base(char c)
{
	if (c == 'x')
		return ("0123456789abcdef");
	return ("0123456789ABCDEF");
}

void	ft_puthex(unsigned int number, char separator, int *i)
{
	int		count;
	char	*hex;
	char	str[8];

	count = 0;
	if (number == 0)
	{
		write(2, "0", 1);
		(*i)++;
		return ;
	}
	hex = ft_get_base(separator);
	while (number != 0)
	{
		str[count] = hex[number % 16];
		number = number / 16;
		count++;
	}
	while (count > 0)
	{
		write(2, &str[count - 1], 1);
		count--;
		(*i)++;
	}
}
