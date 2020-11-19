/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:01:09 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 15:40:45 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	int				i;

	dest = (unsigned char*)s;
	i = 0;
	while (i != n)
	{
		dest[i] = 0;
		i++;
	}
}