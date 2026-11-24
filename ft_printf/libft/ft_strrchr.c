/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:41:06 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 17:10:35 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				last_index;
	unsigned char	ch;

	last_index = ft_strlen(s);
	ch = c;
	if (c == '\0')
		return ((char *)&s[last_index]);
	while ((last_index - 1) >= 0)
	{
		if (s[last_index - 1] == ch)
			return ((char *)&s[last_index - 1]);
		last_index--;
	}
	return (NULL);
}
