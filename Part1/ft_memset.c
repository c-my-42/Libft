/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:18:10 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:17:00 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
	{
		*str++ = c;
	}
	return (b);
}
/*
int main()
{
	char str[] = "Hello!";
	void *b;
	char *s = NULL;
	
	b = malloc(sizeof(void *) * 6);
	b = ft_memset(b, '*', 6);
	s = ft_memset((str, '*', 6);
	printf("%s\n%s\n", (unsigned char *)b, str);
	free(b);
}*/
