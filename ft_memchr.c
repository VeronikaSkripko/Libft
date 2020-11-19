/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:49:36 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 15:58:37 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*parr;
	unsigned char	pc;
	unsigned int	i;

	i = 0;
	parr = arr;
	pc = c;
	while (n-- != 0)
	{
		if (*parr == pc)
			return (void*)(parr);
		parr++;
	}
	return (NULL);
}
