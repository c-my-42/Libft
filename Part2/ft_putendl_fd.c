/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:04 by chmurphy          #+#    #+#             */
/*   Updated: 2023/05/28 06:23:48 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
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
