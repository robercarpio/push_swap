/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:38:27 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 18:17:51 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_stack	args_to_stack(char **argv)
{
	int		i;
	char	**split;
	int		j;
	t_list	*prev;
	t_list	*next;
	t_stack	stack;
	t_list	list;
	i = 1;
	while (argv[i])
	{
		j = 0;
		split = ft_split(argv[i],' ');
		while (split[j])
		{
			list.value = ft_atoi(split[j]);
			if(i == 1 && j == 0)
				prev = NULL;
			else
				prev = &list;
			list.prev = prev;
			j++;
		}
		free_split(split);
		i++;
	}
}
