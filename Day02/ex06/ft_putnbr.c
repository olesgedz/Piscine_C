/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:21:25 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/20 20:08:06 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int scorec;
	int counter;
	int del;
	int i;

	scorec = nb;
	counter = 0;
	del = 10;
	if (scorec < 0 && (scorec *= -1) && ft_putchar('-'))
	{
	}
	while (nb && counter++)
	{
		nb /= 10;
	}
	i = counter - 1;
	while (i-- > 1)
	{
		del = del * 10;
	}
	while (counter-- != 0)
	{
		ft_putchar((scorec / del) % 10 + '0');
		del = del / 10;
	}
}
