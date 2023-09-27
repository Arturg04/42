/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:29:50 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 20:23:37 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(char *colup, char *coldow, char *rowleft, char *rowright);
int		_checkstring(char *str);
void	_transformstring(char *str, char dest[4][4]);

void	_print_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		size;
	char	arrays[4][4];

	if (argc != 2)
	{
		_print_error();
		return (0);
	}
	size = _checkstring(argv[1]);
	if (size < 0)
	{
		_print_error();
		return (0);
	}
	_transformstring(argv[1], arrays);
	rush(arrays[0], arrays[1], arrays[2], arrays[3]);
}
