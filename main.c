/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/15 18:20:02 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	count;
	int	i;
	int	b;
	
	if (argc > 1)
	{
		i = 1;
		count = 0;
		while (argv[i])
		{
			index_counter(&count,argv[i]);
			i++;
		}
		i = 1;
		b = 0;
		while(argv[i])
		{
			if(only_chars_allowed(argv[i],"0123456789-+ "))
			{
				b++;
			}
			i++;
		}
		if (argc == (b + 1))
			printf("true\n");
	}
	else
		printf("Error: args\n");
	return(0);
}
//parse
//letras
//dup
//orden
//