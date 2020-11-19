/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 06:42:28 by schaya            #+#    #+#             */
/*   Updated: 2020/11/12 17:29:41 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*str;
	char	*last;

	str = (char *)string;
	last = NULL;
	if (*str == '\0' && *str == symbol)
		return (str);
	while (*str)
	{
		if (*str == symbol)
			last = str;
		str++;
	}
	if (*str == symbol)
		return (str);
	return (last);
}
