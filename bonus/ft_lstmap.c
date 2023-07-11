/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:54:56 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/02 00:24:01 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	void	*content;

	new = NULL;
	head = new;
	if (!(f || del))
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			return (free(content), ft_lstclear(&head, del), NULL);
		}
		new = ft_lstnew(content);
		if (!new)
		{
			return (free(content), ft_lstclear(&head, del), NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
/*
 * 			**head->
 *					lst->next->next->next->NULL
 *					new->
 *						node->
 */
/*
int main()
{
	char	str[] = "Probably best not to put those lyrics here..";
	char	**tab = ft_split(str, ' ');
	t_list	*head_new = NULL;
	t_list	*list = NULL;
	list = ft_lstnew(*tab);
	t_list	*head = list;
	while (tab)
	{
		list->next = ft_lstnew(++*tab);
		printf("Max 7. 7 ? %d\n", ft_lstsize(list));
		if (ft_lstsize(list) % 2 == 0)
		{
			ft_lstadd_front(&head, list->next);
		}
		else
		{
			ft_lstadd_back(&head, list->next);
		}
		
	}
	printf("%s\n", (char *)ft_lstlast(head)->content);
	head_new = ft_lstmap(head, &ft_lstnew, &free);
	while (head)
	{
		printf("%s\n", (char *)head->content);
		printf("%s\n", (char *)head_new->content);
		head = head->next;
		head_new = head_new->next;
	}
}*/
