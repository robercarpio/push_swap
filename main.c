/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 16:36:34 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	b;
	int	j;
	
	if (argc > 1)
	{
		b = 0;
		i = 1;

		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] != ' ')
					b = 1;
				j++;
			}
			if(argv[i][0] == '\0' || b == 0)
			{
				printf("Error: Argumento vacio\n");
				exit(-1);
			}
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
		{
			b = 1;
			i = 1;
			while (argv[i] && b == 1)
			{
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