/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:41:32 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:41:43 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_start(size_t start, size_t size, char const *set,
		char const *s1)
{
	size_t	count;

	while (start < size)
	{
		count = 0;
		while (set[count] && s1[start] != set[count])
			count++;
		if (set[count] == '\0')
			break ;
		start++;
	}
	return (start);
}

static size_t	count_end(size_t end, size_t start, const char *s1,
		const char *set)
{
	size_t	count;

	while (end > start)
	{
		count = 0;
		while (set[count] && s1[end - 1] != set[count])
			count++;
		if (set[count] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	end;
	size_t	size;
	size_t	start;
	size_t	count;

	size = ft_strlen(s1);
	start = 0;
	start = count_start(start, size, set, s1);
	end = count_end(size, start, s1, set);
	str = malloc(end - start + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (end > start)
	{
		str[count] = s1[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}
