/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 17:03:58 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/26 23:37:03 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*malloc(size_t size);

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*temp;

	i = 0;
	mincp = min;
	if (!(temp = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	if (min >= max)
		range = NULL;
	while (min < max)
	{
		temp[i] = min;
		printf("%d", temp[i]);
		i++;
		min++;
	}
	*range = temp;
	return (i);
}
