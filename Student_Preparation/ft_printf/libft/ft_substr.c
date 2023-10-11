/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:43:58 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:41 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] && count < len)
	{
		if (i >= start)
			count++;
		i++;
	}
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	str[count] = 0;
	while (count-- > 0)
		str[count] = s[count + start];
	return (str);
}
