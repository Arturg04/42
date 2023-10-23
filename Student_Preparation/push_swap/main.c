/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:17:25 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/22 23:21:53 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap	*_stack_a;
	t_push_swap	*_stack_b;

	if (ac < 2)
		return (0);
	_stack_a = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!_stack_a)
		return (0);
	check_params(ac, av, _stack_a);
	_stack_b = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!_stack_b)
	{
		free(_stack_a);
		return (0);
	}
	_stack_b->next = NULL;
	print_stacks(_stack_a, _stack_b);
	return (1);
}
