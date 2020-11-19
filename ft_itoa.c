/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:03:06 by schaya            #+#    #+#             */
/*   Updated: 2020/11/14 19:37:52 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int nbr)
{
	int				count;
	unsigned int	copy_nbr;

	if (nbr == 0)
		return (1);
	count = 0;
	copy_nbr = nbr;
	if (nbr < 0)
	{
		count++;
		copy_nbr = -copy_nbr;
	}
	while (copy_nbr > 0)
	{
		copy_nbr /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int					len;
	int					sign;
	char				*str;
	unsigned int		copy_nbr;

	len = count_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	sign = 0;
	copy_nbr = n;
	if (n < 0)
	{
		sign = 1;
		str[0] = '-';
		copy_nbr = -n;
	}
	len--;
	while (len >= (sign ? 1 : 0))
	{
		str[len] = (copy_nbr % 10) + '0';
		copy_nbr /= 10;
		len--;
	}
	return (str);
}
