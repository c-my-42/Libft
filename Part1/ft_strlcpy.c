/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:33:45 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:30:58 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	if (size < 1)
	{
		return (len);
	}
	while (*src && (i < size - 1))
	{
		dst[i++] = *src++;
	}
	dst[i] = '\0';
	return (len);
}
