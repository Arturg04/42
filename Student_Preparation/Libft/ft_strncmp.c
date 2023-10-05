/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:45:20 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:08:06 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str,
			const char *cmp,
			size_t n)
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
