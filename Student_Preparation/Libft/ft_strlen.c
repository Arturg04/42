/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:08:14 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 22:11:33 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *restrict str)
{
	unsigned int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
