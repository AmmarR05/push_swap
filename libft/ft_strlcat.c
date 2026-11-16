/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:39:23 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:39:24 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedst;
	size_t	temp;
	size_t	count;

	sizedst = 0;
	while (sizedst < dstsize && dst[sizedst])
		sizedst++;
	temp = sizedst;
	count = 0;
	if (sizedst >= dstsize)
		return (dstsize + ft_strlen(src));
	dstsize--;
	while (dstsize > sizedst && src[count])
	{
		dst[sizedst] = src[count];
		sizedst++;
		count++;
	}
	dst[sizedst] = '\0';
	return (ft_strlen(src) + temp);
}
