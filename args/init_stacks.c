/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:20:41 by rober             #+#    #+#             */
/*   Updated: 2025/04/22 20:55:43 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

void	init_stacks(t_stack *stack_a, t_stack *stack_b, char **args)
{
	int	*arr;
	int	*sorted;

	arr = args_to_array(args);
	sorted = sort_array(arr, index_counter(args));
	*stack_a = args_to_stack(args_to_list(args));
	*stack_b = create_stack();
	index_stack(stack_a, sorted, index_counter(args));
	free(arr);
	free(sorted);
}
