/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:34:42 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/21 00:08:47 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i;
		while (base[++j])
		{
			if (base[j] == base[i])
				return (0);
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	return (1);
}

int	power(int nbr, int power)
{
	int	res;

	res = 1;
	while (--power >= 0)
		res = res * nbr;
	return (res);
}

int	position(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
			return (i);
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	strlen;
	int	res;
	int	i;
	int	pos;

	i = -1;
	res = 0;
	baselen = ft_strlen(base);
	strlen = ft_strlen(str);
	if (baselen < 2 || !check(base))
		return (0);
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		res = -res; //está mal
	while (--strlen >= 0 && str[++i])
	{
		pos = position(str[i], base);
		if (pos < 0 && i == 0)
			return (0);
		else if (pos >= 0)
			res = res + pos * power(baselen, strlen);
	}
	return (res);
}

int main(void)
{
	ft_atoi_base("bb", "ab");
}
