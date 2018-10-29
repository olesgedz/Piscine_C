/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 20:14:44 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/20 18:41:19 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int number;

	number = 0;
	while (number <= 9999)
	{
		if (number / 100 % 10 < number % 10)
		{
			if (number / 1000 <= number / 10 % 10)
			{
				ft_putchar(number / 1000 + '0');
				ft_putchar(number / 100 % 10 + '0');
				ft_putchar(' ');
				ft_putchar(number / 10 % 10 + '0');
				ft_putchar(number % 10 + '0');
				if (!(number / 1000 == 9 && number / 100 % 10 == 8))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		number++;
	}
}
