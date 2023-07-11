/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:31:08 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/02 00:25:05 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while ((*str > 8 && *str < 14) || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str++ - 48;
	}
	return (nbr * sign);
}
/*
	*	int main()
	*	{
	*		t_hizzle		*izzle;
	*		char		B;
	*		long long	my = B + *izzle;
	*		int			fo = 1;
	*		const char	description[first] = function();
	*	}
	*	while (user)
	*	{
	*		if (user == awesome)
	*			continue ;
	*		else
	*			user = awesome;
	*	}
*/
