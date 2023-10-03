/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:51:58 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:00 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *restrict src,
					unsigned int n)
{
	unsigned char	*restrict	s;

	s = (unsigned char *)src;
	while (n-- > 0)
		*s++ = 0;
}
