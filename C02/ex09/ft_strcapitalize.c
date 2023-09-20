/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:21:24 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/20 20:46:14 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (str[i - 1] == ' '
				|| str[i - 1] == '-'
				|| str[i - 1] == '+' ))
			str[i] -= 32;
	}
	return (str);
}

// int	main(void)
// {
// 	char teste[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(teste);
// }
