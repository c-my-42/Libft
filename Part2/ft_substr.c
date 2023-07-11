/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:32:05 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/02 00:12:15 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		len = 0;
	}
	else if ((start + len) > s_len)
	{
		len = s_len - start;
	}
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (len--)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main()
{
*	char const	sub[] = "!!!!!!!!";
	char const	s[] = "HelloHelloHelloHello";
*	char		*str;

	str = ft_substr("", 0, 5);
	printf("%s\n\n", str);
}*/
