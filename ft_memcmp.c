/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 04:43:59 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 16:01:03 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (char*)str1;
	src = (char*)str2;
	if (n == 0)
		return (0);
	while (--n && *dst == *src)
	{
		dst = dst + 1;
		src = src + 1;
	}
	return (*dst - *src);
}
