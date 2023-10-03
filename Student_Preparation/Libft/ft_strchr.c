/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:29:22 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 13:34:26 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *restrict str,
				int c)
{
	while (*str)
	{
		if (*str++ == (char)c)
			return ((char *)(--str));
	}
	if (*str == (char)c)
		return ((char *)(str));
	return ((char *)0);
}
