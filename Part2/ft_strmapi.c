/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:47:51 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:27:52 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;

	len = 0;
	if (!(s || f))
	{
		return (NULL);
	}
	while (s[len])
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
	{
		return (NULL);
	}
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = f(len, s[len]);
	}
	return (str);
}
