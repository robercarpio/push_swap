/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:37:47 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/21 19:08:01 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sig_count(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			count++;
		i++;
	}
	return (count);
}
