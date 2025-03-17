/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:29:46 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/03/15 18:16:48 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.h"

int	sig_checker(char *str)
{
	int	counter;

	counter = sig_checker(str);
	return ((counter == 1 && (str[0] == '-' || str[0] == '+') && (str[1] >= 48
				&& str[1] <= 57)) || (counter == 0 && (str[0] >= 48
				&& str[0] <= 57)));
}

//return ((counter == 1 && (str[0] == '-' || str[0] == '+') && (str[1] >= 48 && str[1] <= 57)) || (counter == 0 && (str[0] >= 48 && str[0s] <= 57)));