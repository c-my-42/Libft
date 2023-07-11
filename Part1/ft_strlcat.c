/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 03:33:17 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 09:21:14 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	if (destlen >= dstsize)
	{
		return (dstsize + srclen);
	}
	while (src[i] && (i + destlen) < (dstsize - 1))
	{
		dst[destlen + i] = src[i];
		i++;
	}
	if ((destlen + i) < dstsize)
	{
		dst[destlen + i] = '\0';
	}
	return (destlen + srclen);
}
/*
int	main()
{
	char *d = malloc(sizeof(char) * 20);
	char *dst = malloc(sizeof(char) * 21);
	char s[] = "Hi there!";
	char src[] = "Hello???";
	char *a = malloc(sizeof(char) * 21);
	char *b = malloc(sizeof(char) * 11);
	char *c = malloc(sizeof(char) * 11);
	char *e = malloc(sizeof(char) * 20);
	size_t l = 0;

	d = strcpy(d, s);
	a = strcpy(a, s);
	b = strcpy(b, s);
	c = strcpy(c, s);

	dst = strcpy(dst, s);

	l = ft_strlcat(d, NULL, 18);
	printf("after: ft = \n%lu\n%s\n%s\n%d\n", l, d, (char *)NULL, 18);

	l = strlcat(e, NULL, 18);
	printf("after: _ = \n%lu\n%s\n%s\n%d\n", l, e, (char *)NULL, 18);

	l = ft_strlcat(dst, src, 20);
	printf("ft_after:\n%lu\n%s\n%s\n%d\n\n", l, dst, src, 20);

	l = strlcat(a, src, 20);
	printf("_strl_after:\n%lu\n%s\n%s\n%d\n\n", l, a, src, 20);

	l = ft_strlcat(b, src, 6);
	printf("ft_after:\n%lu\n%s\n%s\n%d\n\n", l, b, src, 6);

	l = strlcat(c, src, 6);
	printf("_strl_after:_\n%s\n%s\n%d\n\n", c, src, 6);
	free(a);
	free(b);
	free(c);
	free(d);
	free(dst);
}*/
