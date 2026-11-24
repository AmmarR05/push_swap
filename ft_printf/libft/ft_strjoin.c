/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:37:36 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:37:37 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_s2(const char *s2, char *str, size_t i)
{
	size_t	j;

	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1;
	size_t	size_s2;
	size_t	i;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	i = 0;
	str = malloc(size_s1 + size_s2 + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	copy_s2(s2, str, i);
	str[size_s1 + size_s2] = '\0';
	return (str);
}
