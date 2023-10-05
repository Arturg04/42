/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:00:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:08:30 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	size;

	if (!s1 ||!set)
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < size)
		i++;
	if (i == size--)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[size]) && size + 1 > 0)
		size--;
	str = malloc(size - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], size - i + 2);
	return (str);
}
