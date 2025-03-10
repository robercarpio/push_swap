/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/10 19:11:41 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	count;
	int	i;
	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			index_counter(&count,argv[i]);
			i++;
		}
		printf("%d\n",count);
	}
	else
		printf("Error: args\n");
	return(0);
}
