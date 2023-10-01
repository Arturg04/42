/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:45 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 23:22:03 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *restrict dst,
					const char *restrict src,
					unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	while (*src && i + 1 < size)
		dst[i++] = *src++;
	if (i < size)
		dst[i] = 0;
	return (i);
}
