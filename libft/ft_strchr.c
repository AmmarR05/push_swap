/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:35:58 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:35:59 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				count;
	unsigned char	ch;

	count = 0;
	ch = c;
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	count = 0;
	while (s[count])
	{
		if (s[count] == ch)
			return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}
