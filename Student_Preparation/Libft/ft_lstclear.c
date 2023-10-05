/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:14:50 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:43:51 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pnt;

	if (lst)
	{
		while (*lst)
		{
			pnt = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = pnt;
		}
	}
}
