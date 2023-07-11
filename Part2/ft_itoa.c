/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:46:28 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:09:24 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	int				sign;
	int				len;

	sign = n <= 0;
	len = sign;
	nbr = n;
	if (sign)
		nbr = -n;
	while (n != 0 && ++len)
		n /= 10;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '-';
	if (nbr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (len-- > sign)
	{
		str[len] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (str);
}
