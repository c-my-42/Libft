/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:50:02 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 12:10:46 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == (unsigned char)c)
	{
		return ((char *)str);
	}
	return (NULL);
}

/* DO IT WITH i++, LIKE STRrCHR.
int	main()
{
	const char	*str;
	char	*s;

	str = "testandtestande";
//I keep trying, last case, cannot figure it.
	s = ft_strchr(str, '\0');
//expect the address of "testantestande" + 1
*
}
*/
