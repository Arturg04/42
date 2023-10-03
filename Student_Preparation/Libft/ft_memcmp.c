/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:12:31 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 13:36:03 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *restrict str1,
				const void *restrict str2,
				unsigned int n)
{
	const unsigned char	*restrict s1;
	const unsigned char	*restrict s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (n-- > 0)
	{
		if (*s1++ != *s2++)
			return ((int)*(--s1) - (int)*(--s2));
	}
	return (0);
}