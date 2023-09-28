/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:57:51 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/28 22:36:30 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_(char *str, int n)
{
	while (n-- > 0)
		write(1, &(*str++), 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char	teste[10];

	ft_bzero(teste, 10);
	ft_putchar_(teste, 10);

	ft_memccpy(teste, "abc", 'd', 10);
	ft_putchar_(teste, 10);

	ft_memchr(teste, 'd', 10);
	ft_putchar_(teste, 10);

	ft_memcpy(teste, "ab", 10);
	ft_putchar_(teste, 10);

	ft_memmove(teste, "adads", 10);
	ft_putchar_(teste, 10);

	ft_memset(teste, 'c', 10);
	ft_putchar_(teste, 10);

	ft_strlcpy(teste, "TESTEteste", 10);
	ft_putchar_(teste, 10);

	ft_strlen(teste);
	ft_putchar_(teste, 10);

	return (0);

}

