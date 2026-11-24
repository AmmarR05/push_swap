/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:39:56 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:39:57 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	srcsize;

	count = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while ((count < dstsize - 1) && (src[count] != '\0'))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (srcsize);
}
