/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/18 18:07:41 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	//int	count;
	int	i;
	int	b;
	
	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			if(argv[i][0] == '\0')
			{
				printf("Error: Argumento vacio\n");
				exit(-1);
			}
			i++;
		}
		// i = 0;
		// count = 0;
		// while (argv[i])
		// {
		// 	index_counter(&count,argv[i]);
		// 	i++;
		// }
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
		{
			b = 1;
			i = 1;
			while (argv[i] && b == 1)
			{
				//split y aplicar el sig checkerr a cada uno de los indices del split
				b = sig_checker(argv[i]);
				i++;
			}
			if (b == 0)
			{
				printf("Error: signos\n");
				exit(-1);
			}
		}
		else
		{
			printf("Error: Caracter no permitido\n");
			exit(-1);
		}
	}
	else
	{
		printf("Error: Argumentos insuficientes\n");
		exit(-1);
	}
	return(0);
}
//parse
//letras
//dup
//orden
//