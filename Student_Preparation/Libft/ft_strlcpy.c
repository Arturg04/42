/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:26:26 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:37 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *restrict dest,
					const char *restrict src,
					unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}
