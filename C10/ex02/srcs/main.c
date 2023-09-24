/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:23:53 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/24 10:12:12 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	check_condicions(int ac, char **av)
{
	int		i;
	int		j;
	char	*c_option;

	c_option = "-c";
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j] == c_option[j] && av[i][j])
			j++;
		if (!av[i][j] && !c_option[j])
		{
			if (i + 1 < ac)
				return (ft_atoi(av[i + 1]));
			return (-1);
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	buffersize;

	if (ac < 2)
		return (0);
	buffersize = check_condicions(ac, av);
	if (buffersize < 0)
		return (0);
	ft_tail(ac, av, buffersize);
	return (1);
}
