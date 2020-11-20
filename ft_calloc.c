/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:28:11 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 16:58:46 by schaya           ###   ########.fr       */
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
	p = (char *)malloc(number * size);
	if (p == 0)
		return (0);
	while (total--)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
