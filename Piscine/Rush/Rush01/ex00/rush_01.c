/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:33:54 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 20:23:56 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_print_line(char *numbers, int length);

void	rush(char *colup, char *coldow, char *rowleft, char *rowright)
{
	int	i;

	i = 0;
	_print_line(colup, 4);
	_print_line(coldow, 4);
	_print_line(rowleft, 4);
	_print_line(rowright, 4);
}
