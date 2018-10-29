/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:57:02 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/22 22:35:23 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
