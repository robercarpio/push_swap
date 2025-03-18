/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:29:46 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/18 20:13:30 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.h"

int	sig_checker(char *str)
{
	char	**split;
	int	counter;
	int	i;
	int	b;

	split= ft_split(str,' ');
	i = 0;
	b = 1;
	while (split[i] && b == 1)
	{
		counter = sig_count(split[i]);
		if (!((counter == 1 && (split[i][0] == '-' || split[i][0] == '+') && (split[i][1] >= 48
				&& split[i][1] <= 57)) || (counter == 0 && (split[i][0] >= 48
				&& split[i][0] <= 57))))
				{
					b = 0;	
				}
		
		i++;
	}
	free_split(split);
	return (b);
}

//return ((counter == 1 && (str[0] == '-' || str[0] == '+') && (str[1] >= 48 && str[1] <= 57)) || (counter == 0 && (str[0] >= 48 && str[0s] <= 57)));