/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:35:48 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/21 19:52:25 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	is_valid_token(char *token)
{
	int	count;

	count = sig_count(token);
	if (!token[0])
		return (0);
	if (count == 1 && (token[0] == '-' || token[0] == '+')
		&& token[1] && token[1] >= '0' && token[1] <= '9')
		return (1);
	if (count == 0 && token[0] >= '0' && token[0] <= '9')
		return (1);
	return (0);
}

int	sig_checker(char **args)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	while (args[i])
	{
		split = ft_split(args[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j])
		{
			if (!is_valid_token(split[j++]))
			{
				free_split(split);
				return (0);
			}
		}
		free_split(split);
		i++;
	}
	return (1);
}
