/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:29:22 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:21 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str,
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
