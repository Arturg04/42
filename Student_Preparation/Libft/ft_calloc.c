/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:15:53 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 21:47:08 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*restrict mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return ((void *)0);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
