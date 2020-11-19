/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:49:13 by schaya            #+#    #+#             */
/*   Updated: 2020/11/19 17:54:18 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	
	unsigned int	i;
	unsigned int	j;
	unsigned int	g;
	char			*newstr;

	i = 0;
	j = 0;
	g = 0;
	if(!s1 || !s2)
		return(0);
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
		j++;
	if(!(newstr = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while(g <= i)
	{
		newstr[g] = s1[g];
		g++;
	}
	g--;
	while(g <= i + j + 1)
	{
		newstr[g] = s2[g - i];
		g++;
	}
	newstr[g] = '\0';
	return(newstr);
	/*
	char	*newstr;
	char	*newstr_;

	if (!s1 || !s2)
		return (0);
	newstr = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	newstr_ = newstr;
	if (newstr == NULL)
		return(NULL);
	while(s1[0] != '\0')
		*newstr++ = s1++[0];
	while(s1[0] != '\0')
		*newstr++ = s2++[0];
	newstr[0] = '\0';
	return(newstr_); 
	*/
}
