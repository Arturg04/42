/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:20:02 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 20:24:26 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_print_line(char *numbers, int length)
{
	int		i;
	char	num;

	i = 0;
	while (i < length)
	{
		num = numbers[i];
		write(1, &num, 1);
		i++;
	}
	write(1, "\n", 1);
}
