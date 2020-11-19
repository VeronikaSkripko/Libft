/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:25:08 by schaya            #+#    #+#             */
/*   Updated: 2020/11/17 19:26:34 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char				*p;
	unsigned int		total;
	unsigned int		i;

	i = 0;
	total = number * size;
	p = (char *)malloc(sizeof(char) * (total));
	if (p == NULL)
		return (NULL);
	while (total--)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
