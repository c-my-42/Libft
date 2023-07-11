/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:30:49 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/01 23:30:58 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(int argc, char **argv)
{
	int		fd;
	size_t	to_read;
	ssize_t	bytes_read;
	void	*buf;
	const char	*pathname;
	int	flags;
	char	*str;
	size_t	count;
	int	i;
	int	j;

	j = 0;
	i = 31;
	count = i;
	if (count > SSIZE_MAX)
	{
//		result is implementation defined...
		count = SSIZE_MAX;
	}
	buf = malloc(i + 1);
	flags = O_RDWR;
	pathname = (void *)argv[1];
	if ((fd = open(pathname, flags)) < 1)
	{
		flags = O_CREAT;
		if ((fd = open(pathname, flags)) < 1)
		{
			return ;
		}
	}
	if ((bytes_read = read(fd, buf, count)) <= 0)
	{
		if (bytes_read == 0)
		{
			fd = open(argv[2], O_CREAT);
		}
//		errno = blah..
	}
	while (bytes_read)
	{
		ft_putchar_fd((char)buf[j++]);
		bytes_read--;
	}
	close(fd);
	free(buf);
}*/
