/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:16:07 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:07:23 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
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
