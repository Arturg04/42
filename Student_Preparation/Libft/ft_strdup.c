/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:16:07 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:34 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *restrict str)
{
	char	*restrict	s;
	unsigned int		i;

	i = 0;
	s = malloc(ft_strlen(str) + 1);
	if (!s)
		return ((char *)0);
	while (*str)
		s[i++] = *str++;
	s[i] = 0;
	return (s);
}
