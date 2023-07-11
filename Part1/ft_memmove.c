/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:25:28 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 10:50:30 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	source = src;
	dest = (char *)dst;
	if (dst == src)
	{
		return (dst);
	}
	if ((dest > source) && (dest < (source + len)))
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		while (len--)
		{
			*dest++ = *source++;
		}
	}
	return (dst);
}
/* memmove guarentees that dst and src don't overlap, now we have 
   to deal with overlappying string addresses. wooooo.

     		      dst0			  src1
  dst1        src0 | 	        len0  
   |           |   |		     | |
   H e l l o W B i t c h e s ! ! ! o o o r l l d
   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2
   |		   |		 |	 |
  src2		  a3		 |  dst0
  						< --from
  						 |	here
 						src0
				     <--from here
 
 *
int	main()
{
	char	*string = NULL;
	char	*r = NULL;
	if (!(r = (char *)malloc(sizeof(char *) * 7)))
	{
		return (-1);
	}
	char	str[] = "HelloWBitches!!!ooorlld";
*	segv requires !^ this one
*	char	*a = NULL;
	char	*b = NULL;
			a = "HelloWBitches!!!ooorlld";
			b = "HelloWBitches!!!ooorlld";
		char y[] = "HelloWBitches!!!ooorlld";
		char x[] = "HelloWBitches!!!ooorlld";
	char	strng[] = "HelloWBitches!!!ooorlld";
*This one ^^..
*
 	char	*dst = NULL;
	char	*dest = NULL;
	char	s[] = "X)xooxxo\0\0\0\0\0\0\0";
*	and THIS ^ one plztxxxu..
 *	char	n[] = "X)xooxxo";

	if (!(string = (char *)malloc(sizeof(char *) * 7)))
	{
		return (-1);
	}
	dst = (void *)string;
	dest = malloc(7);
*	cpy 1., so both_memmove(str + 6, str, 7); Thankyou!
	both calls will be exceptionally well behaved
*	
			printf("0ft_before:\n%s\n%s\n%s\n%d\n", x, x + 7, x, 7);
	ft_memmove(x + 7, x, 7);
	printf("0_ft_after:\n%s\n%s\n%s\n%d\n", x, x + 7, x, 7);

		printf("0_before:\n%s\n%s\n%s\n%d\n", y, y + 7, y, 7);
	memmove(y + 7, y, 7);
	printf("0_after:\n%s\n%s\n%s\n%d\n", y, y + 7, y, 7);

			printf("1ft_before:\n%s\n%s\n%s\n%d\n", str, str + 6, str + 16, 7);
	ft_memmove(str + 6, str + 16, 7);
	printf("1ft_after:\n%s\n%s\n%s\n%d\n", str, str + 6, str + 16 , 7);

		printf("1_before:\n%s\n%s\n%s\n%d\n", strng, strng + 6, strng + 16, 7);

	memmove(strng + 6, strng + 16, 7);

	printf("1_after:\n%s\n%s\n%s\n%d\n", strng, strng + 6, strng + 16, 7);

							printf("2ft_before:\n%s\n%s\n%d\n", dst, s, 6);
	ft_memmove(dst, s, 11);
	printf("2ft_after:\n%s\n%s\n%d\n", dst, s, 6);

								printf("2_before:\n%s\n%s\n%d\n", dest, s, 6);
	memmove(dest, s, 11);
	printf("2_after:\n%s\n%s\n%d\n", dest, s, 6);




		  			  	printf("3ft_before:\n%s\n%s\n%s\n%d\n", a, a + 6, s, 3);
	ft_memmove(a + 6, n, 3);
	printf("3ft_after:\n%s\n%s\n%s\n%d\n", a, a + 6, n, 3);
* Both 3's segving, so comment out rest, plus selected UNUSED VARIABLES lololff
*						printf("3_before:\n%s\n%s\n%s\n%d\n", b, b + 6, n, 3);
	memmove(b + 6, n, 3);
	printf("3_after:\n%s\n%s\n%s\n%d\n", b, b + 6, n, 3);

	free(string);
	free(r);
}*/
