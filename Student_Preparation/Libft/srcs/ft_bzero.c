/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:51:58 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 21:55:43 by Arturg04         ###   ########.fr       */
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
