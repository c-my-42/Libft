/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 06:49:32 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:07:07 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	len;

	len = nmemb * size;
	str = (char *)malloc(len);
	if (!str)
	{
		return (NULL);
	}
	while (len-- > 0)
	{
		str[len] = '\0';
	}
	return ((void *)str);
}
