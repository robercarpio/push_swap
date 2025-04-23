/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <rcarpio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:06:40 by rcarpio-          #+#    #+#             */
/*   Updated: 2025/04/23 18:52:48 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <unistd.h>

# include "../args/args.h"
# include "../aux/aux.h"

int	char_checker(char **args);
int	void_checker(char **args);
int	sig_checker(char **args);
int	dup_checker(t_list *node);
int	sort_checker(t_list *node);
int	parse(char **args);
int	is_valid_token(char *token);
int	has_void_token(char **split);
int	max_checker(char **args);
int	is_valid_int(char *str);
#endif