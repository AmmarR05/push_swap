#include "ft_printf.h"

static void	ft_print_hex_ptr(unsigned long p, int *i)
{
	char	str[16];
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	while (p != 0)
	{
		str[count] = hex[p % 16];
		count++;
		p = p / 16;
	}
	while (count > 0)
	{
		write(2, &str[count - 1], 1);
		count--;
		(*i)++;
	}
}

void	ft_putaddresshex(void *ptr, int *i)
{
	if (ptr == NULL)
	{
		write(2, "(nil)", 5);
		*i += 5;
		return ;
	}
	write(2, "0x", 2);
	*i += 2;
	ft_print_hex_ptr((unsigned long)ptr, i);
}
