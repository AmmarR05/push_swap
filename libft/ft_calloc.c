/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:07:00 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:08:36 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			count;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > ((size_t)-1) / size)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	count = 0;
	while (count < nmemb * size)
	{
		p[count] = 0;
		count++;
	}
	return ((void *)p);
}
