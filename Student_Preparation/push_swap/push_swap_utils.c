/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:23:44 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/22 22:58:44 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_push_swap *stack, char c)
{
	t_push_swap	*temp;

	temp->value = stack->next->value;
	stack->next->value = stack->value;
	stack->value = temp->value;
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
}

void	swap_both(t_push_swap *stack_a, t_push_swap *stack_b)
{
	swap(&stack_a, 'c');
	swap(&stack_b, 'c');
	write(1, "ss\n", 3);
}

void	push(t_push_swap *stack_src, t_push_swap *stack_dest, char c)
{
	t_push_swap	*temp;

	temp->value = stack_dest->value;
	stack_dest->value = stack_src->value;
	stack_src->value = temp->value;
	if (c == 'a')
		write(1, "pa\n", 3);
	if (c == 'b')
		write(1, "pb\n", 3);
}

void	rotate(t_push_swap *stack, char c)
{
	t_push_swap	*temp;

	temp->value = stack->value;
	while (stack->next && stack)
	{
		stack->value = stack->next->value;
		stack = stack->next;
	}
	stack->value = temp->value;
	if (c == 'a')
		write(1, "ra\n", 3);
	if (c == 'b')
		write(1, "rb\n", 3);

}

void	rotate_both(t_push_swap *stack_a, t_push_swap *stack_b)
{
	rotate(stack_a, 'c');
	rotate(stack_b, 'c');
	write(1, "rr\n", 3);
}
