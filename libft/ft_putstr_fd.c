/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:06:28 by amradwan          #+#    #+#             */
/*   Updated: 2026/09/28 20:07:53 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *i)
{
	int	count;

	if (s == NULL)
	{
		write(fd, "(null)", 6);
		*i = *i + 6;
		return ;
	}
	count = 0;
	while (s[count])
	{
		write(fd, &s[count], 1);
		(*i)++;
		count++;
	}
}
