/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 15:26:51 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/26 16:37:11 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*malloc(size_t size);

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	i = 0;
	range = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
