/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:46:45 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 22:51:28 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	while (*argv[0])
	{
		ft_putchar(*argv[0]);
		argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}
