/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:25:06 by amradwan          #+#    #+#             */
/*   Updated: 2026/09/22 19:10:18 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;
	unsigned char	ch;

	count = 0;
	str = s;
	ch = c;
	while (n > count)
	{
		str[count] = ch;
		count++;
	}
	return (str);
}
