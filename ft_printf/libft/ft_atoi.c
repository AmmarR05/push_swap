/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amradwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:59:20 by amradwan          #+#    #+#             */
/*   Updated: 2026/10/01 15:59:23 by amradwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	count;
	int	neg;
	int	number;

	count = 0;
	neg = 1;
	number = 0;
	while (nptr[count] == ' ' || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
			neg = neg * -1;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		number = number * 10 + (nptr[count] - 48);
		count++;
	}
	return (number * neg);
}
