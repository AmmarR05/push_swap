/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 21:17:09 by amradwan          #+#    #+#             */
/*   Updated: 2026/09/28 21:19:37 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int *i)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
		(*i)++;
	}
	if (num < 10)
	{
		c = num + '0';
		write(fd, &c, 1);
		(*i)++;
	}
	else
	{
		ft_putnbr_fd(num / 10, fd, i);
		c = (num % 10) + '0';
		write(fd, &c, 1);
		(*i)++;
	}
}
