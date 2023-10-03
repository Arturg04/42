/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:54:42 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:28 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *restrict src,
						int c,
						unsigned int n)
{
	unsigned char	*restrict	mem;

	mem = (unsigned char *)src;
	while (n-- > 0)
		*mem++ = (unsigned char)c;
	return (src);
}
