/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:13:44 by rober             #+#    #+#             */
/*   Updated: 2025/04/23 19:29:30 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_three(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

	init_vars(stack_a, &first, &second, &third);
	if (!stack_a || !stack_a->head
		|| !stack_a->head->next || !stack_a->head->next->next)
		return ;
	else if (first > second && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first > second && third > second && third < first)
		ra(stack_a);
	else if (first < second && first > third)
		rra(stack_a);
	else if (first > second && first < third)
		sa(stack_a);
	else if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	init_vars(t_stack *stack, int *first, int *second, int *third)
{
	*first = stack->head->value;
	*second = stack->head->next->value;
	*third = stack->head->next->next->value;
}
