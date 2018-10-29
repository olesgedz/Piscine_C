/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 20:51:07 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/29 21:14:41 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int *dst;
	int i;

	i = 0;
	dst = (int*)(malloc(sizeof(int) * length));
	while (i < length)
	{
		dst[i] = f(tab[i]);
		i++;
	}
	return (dst);
}
