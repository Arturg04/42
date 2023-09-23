/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:48:51 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/23 17:31:22 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	printfile(char *str)
{
	int		file;
	char	c;
	int		bytes;

	file = open(str, O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytes = read(file, &c, sizeof(c));
	while (bytes > 0)
	{
		bytes = read(file, &c, sizeof(c));
		write(1, &c, sizeof(c));
	}
	close(file);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	printfile(av[1]);
	write(1, "\n", 1);
	return (0);
}
