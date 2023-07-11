/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 05:53:32 by chmurphy          #+#    #+#             */
/*   Updated: 2023/07/01 23:17:37 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	_tablen(char const *s, char c)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				i++;
			}
			k++;
		}
		else if (s[i] == c)
		{
			i++;
		}
	}
	return (k);
}

static char	*_strndup(char const *s1, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s1 || n == 0)
	{
		return (NULL);
	}
	s2 = (char *)malloc(sizeof(char) * (n + 1));
	if (!s2)
	{
		return (NULL);
	}
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static char	**_free_tabs(char **tab, size_t k)
{
	while (k-- > 0)
	{
		free(tab[k]);
		tab[k] = NULL;
	}
	free(tab);
	tab = NULL;
	return (NULL);
}

static char	**_str_to_tab(size_t size, char **tab, char const *s, char c)
{
	size_t	k;
	size_t	start;
	size_t	end;

	k = 0;
	start = 0;
	end = 0;
	while (k < size)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		tab[k] = _strndup(&s[start], end - start);
		if (!tab[k])
		{
			return (_free_tabs(tab, k));
		}
		start = end;
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		size;

	size = _tablen(s, c);
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (!tab)
	{
		return (NULL);
	}
	tab = _str_to_tab(size, tab, s, c);
	if (!tab)
	{
		return (NULL);
	}
	return (tab);
}
/*
int main()
{
	char str[] = ":::Split!";
	char **s;
	size_t len = 0;
	s = ft_split(str, ':');
	while (len < 4)
	{
		printf("%s\n", s[len]);
		len++;
	}
}*/
