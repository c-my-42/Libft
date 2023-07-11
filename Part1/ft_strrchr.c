/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:53:11 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 12:08:39 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strrchr(const unsigned char *s, int c)
{
	unsigned char	*str;
	int				i;

	i = 1;
	str = (unsigned char *)s;
	while (*str++)
	{
		i++;
	}
	while (str-- && i > 0)
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)str);
		}
		i--;
	}
	if (c == 0)
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "hjkl";
	char *s;

	char *n = strrchr(str, 0);
	s = ft_strrchr(str, 0);
	printf("%p\n%p\n", n, s);
}*/
