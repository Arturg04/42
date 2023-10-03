/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:45:20 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 20:45:47 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *restrict str,
			const char *restrict cmp,
			unsigned int n)
{
	while (n-- > 0)
	{
		if (*str != *cmp++)
			return ((int)((unsigned char)(*str) - (unsigned char)*(--cmp)));
		if (!*str++)
			return (0);
	}
	return (0);
}
