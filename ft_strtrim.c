/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:52:52 by schaya            #+#    #+#             */
/*   Updated: 2020/11/14 19:27:10 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	if (!src || !dest)
		return (0);
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int symbol)
{
	char	ch;
	char	*s;

	ch = symbol;
	s = (char *)str;
	while (*s != ch)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}

char	*ft_strdup(const char *str)
{
	unsigned int	len;
	unsigned int	i;
	char			*copy;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (len--)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		beginning;
	int		end;
	char	*copy;
	
	if (!s1 || !set)
		return (NULL);
	beginning = 0;
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
	{
		beginning++;
		//printf("%d\n", beginning);
	}	
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
	{
		end--;
		//printf("%d\n", end);
	}
	if (beginning >= end)
		return (ft_strdup(""));
	if (!(copy = (char *)malloc(sizeof(char) * (end - beginning + 1 + 1))))
		return (NULL);
	ft_strlcpy(copy, s1 + beginning, end - beginning + 1 + 1);
	return (copy);
}

/*
int main ()
{
	printf("%s\n", ft_strtrim("    ", ""));
}
*/