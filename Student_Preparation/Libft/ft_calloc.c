/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:15:53 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 13:25:31 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb,
				unsigned int size)
{
	void	*restrict mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return ((void *)0);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
