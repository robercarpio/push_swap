/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:12:35 by rober             #+#    #+#             */
/*   Updated: 2025/04/23 19:29:07 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include <stdlib.h>

# include "../aux/aux.h"
# include "../moves/moves.h"
# include "../parse/parse.h"

void	sort(t_stack *stack_a, t_stack *stack_b);
void	sort_three(t_stack *stack_a);
void	insert_sort(t_stack *stack_a, t_stack *stack_b);
void	ksort_b(t_stack *stack_a, t_stack *stack_b);
void	ksort_a(t_stack *stack_a, t_stack *stack_b);
void	init_vars(t_stack *stack, int *first, int *second, int *third);
#endif