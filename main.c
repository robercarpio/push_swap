/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/12 13:46:59 by rober            ###   ########.fr       */
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
		count = 0;
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
