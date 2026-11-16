/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:33:53 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:34:46 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				count;

	d = dest;
	s = src;
	if (d > s)
	{
		count = n;
		while (count > 0)
		{
			count--;
			d[count] = s[count];
		}
	}
	else
	{
		return (ft_memcpy(d, s, n));
	}
	return (dest);
}
