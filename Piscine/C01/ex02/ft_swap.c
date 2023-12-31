/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:00:42 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/08/28 21:49:31 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	_a;

	_a = *a;
	*a = *b;
	*b = _a;
}
/*
int main(void)
{
    int a;
    int b;

    a = 48;
    b = 52;
    ft_swap(&a, &b);
    write(1, &a, 1);
    write(1, &b, 1);
    return (0);
}*/
