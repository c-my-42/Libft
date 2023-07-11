/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:01:42 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:26:14 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!(s1 || s2))
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	str[i + j] = '\0';
	while (j-- > 0)
	{
		str[i + j] = s2[j];
	}
	while (i-- > 0)
	{
		str[i] = s1[i];
	}
	return (str);
}
/*
int	main()
{
//	char const	s1[] = "ABCDEFG";
	char const	s2[] = "HIJKLMNOP";
	char	*str;

	str = ft_strjoin("", s2);
	printf("%s\n", str);
	free(str);
}*/
