/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:28:24 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 21:41:47 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*dest)
		*src++ = *dest++;
	*src = 0;
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(src, dest);
	return (dest);
}
