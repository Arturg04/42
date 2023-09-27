/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:30:56 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/03 20:25:50 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_isnumber(char c)
{
	if (c > 48 && c < 53)
		return (1);
	return (0);
}

int	_checkstring(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((i % 2) == 0)
		{
			if (_isnumber(str[i]) == 1)
				count++;
		}
		else if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	if (count == 16)
		return (count);
	return (0);
}

void	_transformstring(char *str, char dest[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			dest[j / 4][j % 4] = str[i];
			j++;
		}
		i++;
	}
}
