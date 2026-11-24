#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_putnbr_unsigned(unsigned int number, int *i);
void	ft_puthex(unsigned int number, char separator, int *i);
void	ft_putaddresshex(void *ptr, int *i);

#endif