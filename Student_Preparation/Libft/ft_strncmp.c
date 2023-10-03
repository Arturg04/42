/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:45:20 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/30 12:05:05 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *restrict str,
			const char *restrict cmp,
			unsigned int n)
{
	while (*str && *cmp && n-- > 0)
	{
		if (*str++ != *cmp++)
			return ((int)((*--str) - *(--cmp)));
	}
	return (0);
}
