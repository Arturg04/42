/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:35:23 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 21:05:36 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || !lst->next)
		return (lst);
	return (ft_lstlast(lst->next));
}

// t_list	*ft_lstlast(t_list *lst)
// {
// 	t_list	*pnt;

// 	if (!lst)
// 		return (NULL);
// 	pnt = lst;
// 	while (pnt->next)
// 		pnt = pnt->next;
// 	return (pnt);
// }
