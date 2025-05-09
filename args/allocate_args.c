/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:49:00 by rober             #+#    #+#             */
/*   Updated: 2025/04/21 17:26:01 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

void	allocate_args(char ***dest, char **src)
{
	int	i;
	int	len;

	i = 0;
	len = array_length(*dest);
	while (i < len)
	{
		(*dest)[len + i] = src[i];
		i++;
	}
}
