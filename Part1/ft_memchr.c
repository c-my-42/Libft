/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:22:58 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/02 00:15:55 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (mem[i] == (unsigned char)c)
		{
			return ((void *)&mem[i]);
		}
		i++;
	}
	return (NULL);
}
