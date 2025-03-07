/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:03:53 by rober             #+#    #+#             */
/*   Updated: 2025/03/07 19:25:21 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{	(void)argv;
		if(argc>=2)
			write(1,"push_swap\n",10);
		else
			write(1,"Error: Faltan argumentos.\n",26);	
		
	}
	return (0);
}