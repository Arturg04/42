/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:44:02 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/05 20:30:30 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nlst;

	nlst = (t_list *)malloc(sizeof(t_list));
	if (!nlst)
		return (NULL);
	nlst->content = content;
	nlst->next = NULL;
	return (nlst);
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*nlst;

// 	nlst = (t_list *)malloc(sizeof(t_list));
// 	if (!nlst)
// 		return (NULL);
// 	nlst->content = content;
// 	nlst->next = NULL;
// 	return (nlst);
// }
