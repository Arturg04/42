/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:48:43 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/04 00:58:16 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *restrict s1, char const *restrict s2)
{
	char	*restrict	str;
	unsigned int		i;
	unsigned int		j;

	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	while (*s1)
		str[j++] = *s1++;
	while (*s2)
		str[j++] = *s2++;
	str[j] = 0;
	return (str);
}
