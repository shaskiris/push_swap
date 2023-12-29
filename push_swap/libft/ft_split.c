/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:00:13 by shaskiri          #+#    #+#             */
/*   Updated: 2023/12/27 23:06:44 by shaskiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	unsigned int	index;

	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			index++;
		}
	}
	return (index);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		str[i] = ft_substr(s, j, ft_wordlen(&s[j], c));
		if (!str[i])
			return (ft_free(str, i));
		j += ft_wordlen(&s[j], c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
