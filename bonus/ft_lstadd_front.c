/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:12:07 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/21 08:19:01 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return (*lst);
	}
	new->next = *lst;
	*lst = new;
	return (*lst);
}
/*
 *				**lst_head-->
 *								lst->next->next->NULL
 *								new->
 */
