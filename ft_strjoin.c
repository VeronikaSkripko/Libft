/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:49:13 by schaya            #+#    #+#             */
/*   Updated: 2020/11/19 19:36:48 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		g;
	int		s1len;
	int		s2len;
	char	*newstr;

	i = 0;
	g = 0;
	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(newstr = (char *)malloc(sizeof(char) * (s1len + s2len) + 1)))
		return (NULL);
	while (s1[i] != '\0')
		newstr[g++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		newstr[g++] = s2[i++];
	newstr[g] = '\0';
	return (newstr);
}
