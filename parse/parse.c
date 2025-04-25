/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:04:49 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/24 16:37:42 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	parse(char **args)
{
	t_stack	stack;
	t_list	*tmp;

	if (!char_checker(args) || !max_checker(args))
		return (0);
	if (!sig_checker(args) || void_checker(args))
		return (0);
	tmp = args_to_list(args);
	if (!tmp)
		return (0);
	stack = args_to_stack(tmp);
	if (dup_checker(stack.head))
	{
		free_list(tmp);
		return (1);
	}
	free_list(tmp);
	return (0);
}

int	is_valid_int(char *str)
{
	long long	value;

	value = ft_atoi(str);
	if ((value > 2147483647 || value < -2147483648)
		|| ft_strlen(str) >= 12)
		return (0);
	return (1);
}

int	max_checker(char **args)
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
			if (!is_valid_int(split[j]))
			{
				free_split(split);
				return (0);
			}
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}
