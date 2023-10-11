/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-pinh <ade-pinh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:35:23 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/06 18:34:55 by ade-pinh         ###   ########.fr       */
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
