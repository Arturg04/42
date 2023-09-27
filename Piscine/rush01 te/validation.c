/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:29:09 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 21:55:23 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	getlength(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	return (i);
}
int checkRow(char *row, char *clue)
{
	int	i;
	int	res;
	int	count;
	int	highest;
	int	length = getlength(row);

	i = 0;
	count = 0;
	highest = 0;
	while (i < length)
	{
		if (row[i] > highest)
		{
			highest = row[i++];
			count++;
		}
	}
	if (count == clue[0] - '0' && highest == clue[1])
		return (1);
	return (0);
}
int verifyGrid(char **grid, char *top, char *bottom, char *left, char *right, int size)
{
	int		i;
	char	leftCol[size];
	char	rightCol[size];

	i = 0;
	if (!checkRow(grid[0], top) || !checkRow(grid[size - 1], bottom))
		return 0;
	while (i < size)
	{
		leftCol[i] = grid[i][0];
		rightCol[i] = grid[i][size - 1];
		i++;
	}
	if (!checkRow(leftCol, left) || !checkRow(rightCol, right))
		return 0;
	return 1;
}
