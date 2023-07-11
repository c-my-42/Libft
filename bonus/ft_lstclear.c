/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:45:39 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:10:46 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		del(temp->content);
		*lst = (*lst)->next;
		free(temp);
	}
}
/*		**lst-->
 *		delete->	
 *			next->next->NULL
 *			
 */
