/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:45:46 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 19:27:41 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		y;

	dest = (unsigned char *)memptr;
	y = val;
	i = 0;
	while (i != num)
	{
		dest[i] = y;
		i++;
	}
	return (dest);
}
