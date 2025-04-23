/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:23:46 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/21 19:57:30 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	has_void_token(char **split)
{
	int	j;

	j = 0;
	while (split[j])
	{
		if (only_chars_allowed(split[j], " ") || split[j][0] == '\0')
			return (1);
		j++;
	}
	return (0);
}

int	void_checker(char **args)
{
	int		i;
	int		b;
	char	**split;

	i = 0;
	b = 0;
	while (args[i] && b == 0)
	{
		if (only_chars_allowed(args[i], " "))
			b = 1;
		else
		{
			split = ft_split(args[i], ' ');
			if (!split)
				return (1);
			if (has_void_token(split))
				b = 1;
			free_split(split);
		}
		i++;
	}
	return (b);
}
