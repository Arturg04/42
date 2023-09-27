/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:04:15 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/23 19:26:36 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void	printfile(char *str)
{
	int		file;
	char	c;
	int		bytes;

	file = open(str, O_RDONLY);
	if (file == -1)
	{
		write(1, strerror(errno), sizeof(strerror(errno)));
		write(1, "\n", 1);
		return ;
	}
	bytes = read(file, &c, sizeof(c));
	while (bytes > 0)
	{
		write(1, &c, sizeof(c));
		bytes = read(file, &c, sizeof(c));
	}
	if (bytes < 0)
		write(1, strerror(errno), sizeof(strerror(errno)));
	close(file);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	while (++i < ac)
		printfile(av[i]);
	return (0);
}
