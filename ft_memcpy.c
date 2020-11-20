/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:01:57 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 16:33:15 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*pd;
	unsigned char	*ps;

	i = 0;
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (pd != ps)
	{
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}
