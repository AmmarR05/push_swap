/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:36:42 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:36:44 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

static char	*copy_part(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (len > count)
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_of_s;

	len_of_s = ft_strlen(s);
	if (start > len_of_s)
		return (empty_str());
	if (len <= len_of_s - start)
		return (copy_part(s, start, len));
	return (copy_part(s, start, len_of_s - start));
}
