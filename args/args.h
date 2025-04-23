/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/23 18:41:25 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H

# include <stdlib.h>

# include "../aux/aux.h"

int		index_counter(char **args);
void	allocate_args(char ***dest, char **src);
t_stack	args_to_stack(t_list *list);
t_list	*args_to_list(char **args);
int		*args_to_array(char **args);
void	index_stack(t_stack *stack, int *arr, int arr_size);
void	init_stacks(t_stack *stack_a, t_stack *stack_b, char **args);
t_list	*add_split_to_list(char **split, t_list *tail, t_list **head);
int		fill_array(char **args, int *arr);

#endif