/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:12:29 by ade-pinh          #+#    #+#             */
/*   Updated: 2023/10/22 23:22:44 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/Libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_swap
{
	int				value;
	struct s_swap	*next;
}	t_push_swap;

void	swap(t_push_swap *stack, char c);
void	swap_both(t_push_swap *stack_a, t_push_swap *stack_b);
void	push(t_push_swap *stack_src, t_push_swap *stack_dest, char c);
void	rotate(t_push_swap *stack, char c);
void	rotate_both(t_push_swap *stack_a, t_push_swap *stack_b);
void	rotate_reverse(t_push_swap *stack, char c);
void	rotate_reverse_both(t_push_swap *stack_a, t_push_swap *stack_b);
void	call_error(t_push_swap *stack);
void	check_params(int ac, char	**av, t_push_swap *stack);
void	print_stacks(t_push_swap *_stack_a, t_push_swap *_stack_b);

#endif
