/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:14:04 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/21 08:20:18 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main(void)
{
    int num1 = 10;
    int num2 = 20;
    char *str1 = "hello";
    char *str2 = "world";

    t_list *node1 = ft_lstnew(&num1);
    t_list *node2 = ft_lstnew(&num2);
    t_list *node3 = ft_lstnew(str1);
    t_list *node4 = ft_lstnew(str2);

    printf("Node 1: %d\n", *(int *)node1->content);
    printf("Node 2: %d\n", *(int *)node2->content);
    printf("Node 3: %s\n", (char *)node3->content);
    printf("Node 4: %s\n", (char *)node4->content);

    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return (0);
}
*/
