#include "ft_printf.h"

static void	ft_format_text(char c, va_list *arg, int *i)
{
	char	ch;
	char	*str;
	void	*ptr;

	if (c == 'c')
	{
		ch = va_arg(*arg, int);
		write(2, &ch, 1);
		(*i)++;
	}
	else if (c == 's')
	{
		str = va_arg(*arg, char *);
		ft_putstr_fd(str, 2, i);
	}
	else if (c == 'p')
	{
		ptr = va_arg(*arg, void *);
		ft_putaddresshex(ptr, i);
	}
	else if (c == '%')
	{
		write(2, "%", 1);
		(*i)++;
	}
}

static void	ft_format_num(char c, va_list *arg, int *i)
{
	int				num;
	unsigned int	unum;

	if (c == 'i' || c == 'd')
	{
		num = va_arg(*arg, int);
		ft_putnbr_fd(num, 2, i);
	}
	else if (c == 'u')
	{
		unum = va_arg(*arg, unsigned int);
		ft_putnbr_unsigned(unum, i);
	}
	else if (c == 'x' || c == 'X')
	{
		unum = va_arg(*arg, unsigned int);
		ft_puthex(unum, c, i);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	if (format == NULL)
		return (0);
	count = 0;
	i = 0;
	va_start(arg, format);
	while (format[count])
	{
		if (format[count] == '%' && format[count + 1] != '\0')
		{
			ft_format_text(format[count + 1], &arg, &i);
			ft_format_num(format[count + 1], &arg, &i);
			count++;
		}
		else if (format[count] != '%')
			i += write(2, &format[count], 1);
		count++;
	}
	va_end(arg);
	return (i);
}
