/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:32:17 by rober             #+#    #+#             */
/*   Updated: 2025/03/07 18:40:50 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

void	ft_bzero(void *s, int n)
{
	int			i;
	char	*pts;

	pts = s;
	i = 0;
	while (i < n)
	{
		pts[i] = 0;
		i++;
	}
}
