/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:13:21 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/24 16:59:16 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static int	handle_error(t_list *tmp)
{
	free_list(tmp);
	write(1, "Error\n", 6);
	return (0);
}

static int	handle_sorted_input(t_list *tmp)
{
	free_list(tmp);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_list	*tmp;
	t_list	*node;

	if (argc <= 1)
		return (0);
	argv++;
	node = args_to_list(argv);
	if ((is_alpha(*argv) && argc == 2)
		|| !max_checker(argv) || !sig_checker(argv)
		|| void_checker(argv) || !dup_checker(node))
		return (free_list(node), write(1, "Error\n", 6), 0);
	free_list(node);
	tmp = args_to_list(argv);
	if (!sort_checker(tmp))
		return (handle_sorted_input(tmp));
	if (!parse(argv))
		return (handle_error(tmp));
	init_stacks(&stack_a, &stack_b, argv);
	sort(&stack_a, &stack_b);
	free_list(tmp);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
