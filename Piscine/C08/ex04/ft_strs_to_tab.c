/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 05:03:40 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/09/13 06:47:02 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(src) + 1);
	if (dest == NULL)
		return (0);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	char		*copy;
	t_stock_str	*ptr;

	i = 0;
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (0);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].copy = ft_strcpy(av[i]);
		ptr[i].str = av[i];
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	t_stock_str	*ptr = ft_strs_to_tab(ac - 1, &(av[1]));

// 	while (ptr[i].str != NULL)
// 	{
// 		printf("%d\n", ptr[i].size);
// 		printf("%s\n", ptr[1].str);
// 		printf("%s\n", ptr[i].copy);
// 		i++;
// 	}

// }

// int	main(void)
// {
// 	char	*av[] = {"a", "ab", "abc", "abcd", "abcde"};
// 	int	size = 5;
// 	t_stock_str	*ptr = ft_strs_to_tab(size, av);

// 	for(int i = 0; ptr[i].str != NULL; i++)
// 		printf("size: %i; str: %s; copy: %s\n", ptr[i].size
//, ptr[i].str,
// ptr[i].copy);
// }
