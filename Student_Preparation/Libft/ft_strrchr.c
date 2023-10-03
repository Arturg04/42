/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:43:09 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:38:42 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *restrict str,
				int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	i++;
	while (i-- > 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}
	return ((char *)0);
}
