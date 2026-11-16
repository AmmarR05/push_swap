/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:31:30 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:31:33 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				count;

	ptr = s;
	ch = c;
	count = 0;
	while (n > count)
	{
		if (ptr[count] == ch)
			return ((void *)&ptr[count]);
		count++;
	}
	return (NULL);
}
