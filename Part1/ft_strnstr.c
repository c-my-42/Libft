/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:45:52 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:34:15 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	while (haystack[i + n] && needle[n] && i + n < len)
	{
		if (haystack[i + n] == needle[n])
		{
				n++;
		}
		else
		{
			i++;
			n = 0;
		}
	}
	if (!needle[n])
	{
		return ((char *)&haystack[i]);
	}
	return (NULL);
}
/*
int	main()
{
	const char haystack[] = "HHEISDJDIHellOIOHello DJB#R(#R*YEUFHI";
	const char needle[] = "Hello";
	char *str;

	str = ft_strnstr(haystack, needle, 45);
	printf("%s\n", str);
}*/
