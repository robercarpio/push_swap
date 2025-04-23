/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dup_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:10:48 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/21 17:53:55 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	find_dup_value(t_list *node)
{
	int	n;
	int	b;

	n = node->value;
	b = 0;
	node = node->next;
	while (node && b == 0)
	{
		if (n == node->value)
			b = 1;
		node = node->next;
	}
	return (b);
}
