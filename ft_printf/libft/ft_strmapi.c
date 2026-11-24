/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:31:29 by amradwan          #+#    #+#             */
/*   Updated: 2026/09/28 19:47:05 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*str;
	size_t	count;

	size = ft_strlen(s);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (size > count)
	{
		str[count] = f((unsigned int)count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
