/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:33:54 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 21:55:20 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		fatorial(int i);
int		getlength(char *str);
void	ft_swap(char *a, int b, int c);
int		checkRow(char *row, char *clue);
void	_print_line(char *numbers, int length);
char	*ft_strcpy(char *dest, const char *src);
int		permutacao_recursiva(char *input, char **all, int temp, int size, int count);
int		verifyGrid(char **grid, char *top, char *bottom, char *left, char *right, int size);

void	rush(char *colup, char *coldow, char *rowleft, char *rowright)
{
	int		i;
	char	range[4];
	char	*all[fatorial(4)];

	i = 0;
	while (i < 4)
	{
		range[i] = i + 49;
		i++;
	}
	range[i] = 0;
	_print_line(range,4);
	int count = permutacao_recursiva(range, all, 0, 4, 0);
	for (i = 0; i < count; i++)
	{
		printf("%s\n", all[i]);
		free(all[i]);
	}
	_print_line(colup, 4);
	_print_line(coldow, 4);
	_print_line(rowleft, 4);
	_print_line(rowright, 4);
}
