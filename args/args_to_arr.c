/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:29:45 by rober             #+#    #+#             */
/*   Updated: 2025/04/23 16:06:02 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

// int	*args_to_array(char **args)
// {
// 	int		len;
// 	int		*arr;
// 	int		i;
// 	int		j;
// 	int		k;
// 	char	**split;

// 	len = index_counter(args);
// 	arr = malloc(len * sizeof(int));
// 	if (!arr)
// 		return (NULL);
// 	i = 0;
// 	k = 0;
// 	while (args[i])
// 	{
// 		split = ft_split(args[i], ' ');
// 		if (!split)
// 			return (NULL);
// 		j = 0;
// 		while (split[j])
// 		{
// 			arr[k] = ft_atoi(split[j]);
// 			k++;
// 			j++;
// 		}
// 		free_split(split);
// 		i++;
// 	}
// 	return (arr);
// }
int	*args_to_array(char **args)
{
	int		*arr;
	int		len;

	len = index_counter(args);
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	if (!fill_array(args, arr))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

int	fill_array(char **args, int *arr)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	while (args[i])
	{
		split = ft_split(args[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j])
		{
			arr[k] = ft_atoi(split[j]);
			j++;
			k++;
		}
		free_split(split);
		i++;
	}
	return (1);
}
