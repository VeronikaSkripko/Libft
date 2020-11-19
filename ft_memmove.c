/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:32:31 by schaya            #+#    #+#             */
/*   Updated: 2020/11/14 13:43:12 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (char *) dest;
	ps = (char *) src;
	if (src == dest)
		return (dest);
	if (ps < pd && pd < ps + n)
	{
		ps += n;
		pd += n;
		while (n-- != 0)
			*--pd = *--ps;
	}
	else
		while (n-- != 0)
			*pd++ = *ps++;
	return (dest);
}
