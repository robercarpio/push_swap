/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   must_contain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:00:00 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/15 18:04:22 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	must_contain(char *str, char *must)
{
	int	i;
	int j;
	int	b;
	
	b = 0;
	i = 0;
	while (str[i] && b == 0)
	{
		j = 0;
		while (must[j] && b == 0)
		{
			if(str[i] == must[j])
			{
				b = 1;
			}
			j++;
		}
		i++;
	}
	return(b);
}