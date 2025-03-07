/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rober <rober@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:04:01 by rober             #+#    #+#             */
/*   Updated: 2025/03/07 19:49:18 by rober            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_H
# define AUX_H

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char *s, int start, int len);
char	**ft_split(char *s, char c);
void	*ft_calloc(int nmemb, int size);
int	ft_strlen(char *str);
char	*ft_strdup(char *s);
int	ft_strlcpy(char *dst, char *src, int size);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, void *src, int n);

#endif