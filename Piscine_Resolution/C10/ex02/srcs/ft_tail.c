/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:02:30 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/24 10:53:09 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	filesize(char *filepath)
{
	char	c;
	int		i;
	int		file;
	int		bytes;

	file = open(filepath, O_RDONLY);
	if (file < 0)
		return (-1);
	bytes = read(file, &c, sizeof(c));
	while (bytes > 0)
	{
		i++;
		bytes = read(file, &c, sizeof(c));
	}
	close(file);
	if (bytes < 0)
		return (-1);
	return (i);
}

int	filelines(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str++ == '\n')
			i++;
	}
	return (i);
}

char	*filecontex(char *filepath, int buffer)
{
	int		file;
	char	*arr;

	arr = (char *)malloc(buffer +1);
	file = open(filepath, O_RDONLY);
	read(file, arr, buffer);
	close(file);
	arr[buffer + 1] = 0;
	return (arr);
}

void	printfile(char *str, int buffer)
{
	int	lines;

	if (buffer == 0)
	{
		lines = filelines(str);
		while (lines > 10)
		{
			if (*str++ == '\n')
				lines--;
		}
		while (*str)
			write(1, &(*str++), 1);
		return ;
	}
	while (*str)
		str++;
	while (buffer-- > 0)
		str--;
	while (*str)
		write(1, &(*str++), 1);
}

void	ft_tail(int ac, char **av, int buffersize)
{
	int		i;
	char	*arr;
	int		buffer;

	i = 0;
	while (++i < ac)
	{
		buffer = filesize(av[i]);
		if (buffer < 0)
			continue ;
		if ((ac > 2 && buffersize == 0) || (ac - 2 > 2 && buffersize > 0))
		{
			write(1, "==> ", 4);
			write(1, basename(av[i]), sizeof(basename(av[i])));
			write(1, " <==\n", 5);
			arr = filecontex(av[i], buffer);
			printfile(arr, buffersize);
			free(arr);
			continue ;
		}
		arr = filecontex(av[i], buffer);
		printfile(arr, buffersize);
		free(arr);
	}
}
