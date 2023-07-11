/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:29:39 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:32:28 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!(*s1 || *s2))
	{
		return (0);
	}
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 && n && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*str1 - *str2);
}
/*
int	main()
{
	So. Had one case left in francinette, which was cmp("\200", "", 1), 
		or some shit like that. I had the *s1 == *s2 comparing? I think?
			I had it with unsigned char * before, changed it thinking
			it was somehow wrong, tried chars and ints and all sorts.
			Changed them, and put the if(!(s's)) before the assignments,
		and that's it, bitches and dudes. 
			Unsigned char*'s can handle NON-ASCII values (0-255),
}*/
