/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:40:23 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 17:55:42 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*copy;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while ((start < i) && (j < len))
	{
		copy[j] = s[start];
		j++;
		start++;
	}
	copy[j] = '\0';
	return (copy);
}
