/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:07:07 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/29 23:26:18 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *restrict str,
				const char *restrict locate,
				unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (locate[j])
		j++;
	if (j == 0)
		return (str);
	while (*str && size > 0 && j > size)
	{
		i = 0;
		while (locate[i] == str[i])
			i++;
		if (!locate[i])
			return (str);
		size--;
		str++;
	}
	return ((char *)0);
}
