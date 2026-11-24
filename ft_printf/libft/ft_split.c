/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:35:13 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:35:14 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_fun(char **str, size_t index)
{
	while (index > 0)
	{
		index--;
		free(str[index]);
	}
	free(str);
}

static char	*get_str(const char *s, char c, size_t *i)
{
	size_t	j;
	size_t	count;
	char	*str;

	while (s[*i] == c)
		(*i)++;
	j = *i;
	while (s[j] && s[j] != c)
		j++;
	str = malloc(j - *i + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (*i < j)
	{
		str[count] = s[*i];
		count++;
		(*i)++;
	}
	str[count] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**str;
	size_t	i;
	size_t	index;

	len = count_word(s, c);
	i = 0;
	index = 0;
	str = malloc((len + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[index] = get_str(s, c, &i);
		if (str[index] == NULL)
		{
			free_fun(str, index);
			return (NULL);
		}
		index++;
		len--;
	}
	str[index] = NULL;
	return (str);
}
