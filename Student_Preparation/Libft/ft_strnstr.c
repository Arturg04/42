/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:07:07 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:36 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str,
				const char *locate,
				size_t size)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	j = 0;
	while (locate[j])
		j++;
	if (j == 0)
		return (s);
	while (*s && size > 0 && j <= size)
	{
		i = 0;
		while (locate[i] == s[i] && locate[i])
			i++;
		if (!locate[i])
			return (s);
		size--;
		s++;
	}
	return ((char *)0);
}
