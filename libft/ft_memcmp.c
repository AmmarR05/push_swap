/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:32:22 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:32:24 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				count;

	st1 = s1;
	st2 = s2;
	count = 0;
	while (n > count)
	{
		if (st1[count] != st2[count])
			return (st1[count] - st2[count]);
		count++;
	}
	return (0);
}
