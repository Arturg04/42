/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:23:59 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 19:40:17 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (size / 2 > i)
	{
		j = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = j;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	teste[] = {1, 2, 3, 4, 5};

// 	i = 0;
// 	ft_rev_int_tab(teste, 5);

// 	while (i < 5)
// 		printf("%i\n", teste[i++]);
// }

