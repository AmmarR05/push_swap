/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:00:37 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 16:15:38 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_number_string(size_t size_n, long number, char *str, int n)
{
	while (size_n > 0)
	{
		size_n--;
		if (n < 0 && size_n == 0)
		{
			str[0] = '-';
			break ;
		}
		str[size_n] = number % 10 + '0';
		number = number / 10;
	}
}

static void	check_sign(long *number, size_t *size_n)
{
	if (*number <= 0)
	{
		*number = (*number) * -1;
		(*size_n)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size_n;
	long	number;

	size_n = 0;
	number = n;
	check_sign(&number, &size_n);
	while (number > 0)
	{
		size_n++;
		number = number / 10;
	}
	number = n;
	str = malloc(size_n + 1);
	if (str == NULL)
		return (NULL);
	if (number < 0)
	{
		number = number * -1;
	}
	str[size_n] = '\0';
	fill_number_string(size_n, number, str, n);
	return (str);
}
