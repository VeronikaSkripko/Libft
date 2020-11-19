/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:54:26 by schaya            #+#    #+#             */
/*   Updated: 2020/11/15 19:59:54 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*pd;
	unsigned char	*ps;

	i = 0;
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (pd != ps)
	{
		while (i < n)
		{
			pd[i] = ps[i];
			if(ps[i] == (unsigned char)c)
				return (dest + i + 1);
			i++;
			/*
			if (ps[i] != (unsigned char)c)
			{
				pd[i] = ps[i];
				i++;
			}
			if (ps[i] == (unsigned char)c)
			{
				pd[i] = ps[i];
				return (dest + i + 1);
			}
			*/
		}
	}
	return (NULL);
}
/*
int main (void)
{
   // Массив источник данных
   unsigned char src[15]="a\0bc";

   // Массив приемник данных
   unsigned char dst[15]="1234";
   int g = 0;
	while(g < 4)
	{
		printf("%d ", dst[g]);
		g++;
	}
	printf("\n");
   // Копируем данные из массива src в массив dst
   ft_memccpy (dst, src,'c', 3);
   //memccpy(dst, src,'5', 5);
	g = 0;
	while(g < 4)
	{
		printf("%d ", dst[g]);
		g++;
	}
	printf("\n");
   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);

   return 0;
}
*/