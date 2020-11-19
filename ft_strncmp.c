/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:37:22 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 17:34:21 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned char	uc1;
	unsigned char	uc2;

	if (n == 0)
		return (0);
	while (n-- > 0 && *s1 == *s2)
	{
		if (n == 0 || *s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	uc1 = (*(unsigned char *)s1);
	uc2 = (*(unsigned char *)s2);
	return ((uc1 < uc2) ? -1 : (uc1 > uc2));
}
