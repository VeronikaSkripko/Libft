/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:49:23 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 18:07:08 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char		*ft_strcpy(char *dest, char const *src, size_t n)
{
	size_t		i;
	char		*src1;

	src1 = (char *)src;
	i = 0;
	while (i < n && src1[i] != 0)
	{
		dest[i] = src1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int		count_words(char const *s, char c)
{
	int			found_words;

	found_words = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			found_words++;
			while (*s != c && *s != '\0')
				s++;
		}
		if (*s == '\0')
			return (found_words);
		s++;
	}
	return (found_words);
}

static char		*add_substr(char const *s, size_t n)
{
	char		*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s, n);
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char		**arr;
	int			i;
	int			j;
	int			g;

	if (!s ||
	!(arr = (char **)malloc(sizeof(char *) * (count_words(s, c)) + 1)))
		return (NULL);
	i = 0;
	g = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (!(arr[g++] = add_substr(s + j, i - j)))
				return (ft_free(arr));
		}
		if (s[i] != '\0')
			i++;
	}
	arr[g] = 0;
	return (arr);
}
