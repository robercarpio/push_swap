/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:22:23 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/23 16:55:24 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

long long	ft_atoi(char *nptr)
{
	long long	i;
	long long	sig;
	long long	n;

	i = 0;
	sig = 1;
	n = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sig *= -1;
		}
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		n = (n * 10) + nptr[i] - 48;
		i++;
	}
	return (n * sig);
}
