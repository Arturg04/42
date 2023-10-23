/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:26:34 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/22 22:59:05 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse(t_push_swap *_stack, char _c)
{
	long int	temp1;
	long int	temp2;
	t_push_swap	*stack_ptr;

	stack_ptr = _stack;
	temp1 = _stack->next->value;
	while (_stack && _stack->next)
	{
		temp2 = _stack->next->value;
		_stack->next->value = temp1;
		_stack = _stack->next;
		temp1 = temp2;
	}
	stack_ptr->value = _stack->value;
	_stack->value = temp1;
	if (_c == 'a')
		write(1, "rra\n", 3);
	if (_c == 'b')
		write(1, "rrb\n", 3);
}

void	rotate_reverse_both(t_push_swap *_stack_a, t_push_swap *_stack_b)
{
	rotate_reverse(_stack_a, 'c');
	rotate_reverse(_stack_b, 'c');
	write(1, "rrr\n", 4);

}

void	call_error(t_push_swap *_stack)
{
	free(_stack);
	write(1, "Error\n", 6);
	exit(0);
}

void	print_stacks(t_push_swap *_stack_a, t_push_swap *_stack_b)
{
	while (!_stack_a->next && !_stack_b->next)
	{
		if (_stack_a->next)
		{
			ft_putnbr_fd(_stack_a->value, 1);
			_stack_a = _stack_a->next;
		}
		else
			write(1, "     ", 5);
		write(1, "|", 1);
		if (_stack_b->next)
		{
			ft_putnbr_fd(_stack_b->value, 1);
			_stack_b = _stack_b->next;
		}
		else
			write(1, "     ", 5);
		write(1, "\n", 1);
	}
}
