/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:25:29 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:00 by ade-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	return (++count + ft_lstsize(lst->next));
}

// int	ft_lstsize(t_list *lst)
// {
// 	t_list	*ptr;
// 	int		count;

// 	count = 0;
// 	ptr = lst;
// 	while (ptr)
// 	{
// 		count++;
// 		ptr = ptr->next;
// 	}
// 	return (count);
// }
