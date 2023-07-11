/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:47:02 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:10:25 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*source;
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (!(src || dst))
	{
		return (NULL);
	}
	while (i < n)
	{
		dest[i++] = *source++;
	}
	return (dst);
}
/* Did have s & d = (unsigned char *)dst, but, apparently restrict means, as
 * well, 
 that we guarantee the strings do not overlap, memcpy(str + 1, str, n)...!!!!
 * Aan we prefer to use memmove over memcpy for this reason? Ye? Think so..
int main()
{
	unsigned char *z = NULL;
	unsigned char str[] = "Hello!";
	void *dst;
		if ((z = (unsigned char *)malloc(sizeof(unsigned char *) * 7)) == NULL)
		{
			return (-1);
		}
	dst = (void *)z;
	//undefined behavior]
	ft_memcpy(str + 1, str, 7);
	//	some defined behavior
	ft_memcpy(dst, str, 7);
 	printf("%s\n%s\n", str, (unsigned char *)dst);
}
*/
