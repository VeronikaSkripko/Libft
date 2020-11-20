/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:52:52 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 18:13:44 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		beginning;
	int		end;
	char	*copy;

	if (!s1 || !set)
		return (NULL);
	beginning = 0;
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		beginning++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	if (beginning >= end)
		return (ft_strdup(""));
	if (!(copy = (char *)malloc(sizeof(char) * (end - beginning + 1 + 1))))
		return (NULL);
	ft_strlcpy(copy, s1 + beginning, end - beginning + 1 + 1);
	return (copy);
}
