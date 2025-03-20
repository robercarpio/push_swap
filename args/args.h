/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:10:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/20 16:55:39 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H

#include <stdio.h>

#include "../aux/aux.h"

void	index_counter(int *count, char *str);
void	allocate_args(char ***dest, char **src);
t_stack	args_to_stack(char **argv);

#endif