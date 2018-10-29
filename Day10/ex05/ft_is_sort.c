/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:45:19 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/30 18:27:35 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return 0;
		i++;
	}
	return (1);
}