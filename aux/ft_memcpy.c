/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:12:00 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/07 20:57:37 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

void	*ft_memcpy(void *dest, void *src, int n)
{
	char		*ptdest;
	char	*ptsrc;
	int				i;

	ptdest = dest;
	ptsrc = src ;
	i = 0;
	if (!ptdest && !ptsrc)
		return (NULL);
	while (i < n)
	{
		ptdest[i] = ptsrc[i];
		i++;
	}
	return (dest);
}
