/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:17:05 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/17 17:45:30 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	sig_count(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			count++;
		i++;
	}
	return (count);
}
