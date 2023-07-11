/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:26:46 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:09:48 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str2 = (unsigned char *)s2;
	str1 = (unsigned char *)s1;
	while (n--)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
			str1++;
			str2++;
	}
	return (0);
}
