#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int number, int *i)
{
	unsigned long	num;
	char			c;

	num = number;
	if (number < 10)
	{
		c = num + '0';
		write(2, &c, 1);
		(*i)++;
	}
	else
	{
		ft_putnbr_unsigned(num / 10, i);
		c = num % 10 + '0';
		write(2, &c, 1);
		(*i)++;
	}
}
