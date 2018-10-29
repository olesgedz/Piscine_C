/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:13:24 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/20 17:22:46 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int number;

	number = 0;
	while (number <= 789)
	{
		if ((number / 100 < (number / 10) % 10))
		{
			if ((number / 10) % 10 < number % 10)
			{
				ft_putchar(number / 100 + '0');
				ft_putchar(number / 10 % 10 + '0');
				ft_putchar(number % 10 + '0');
				if (!(number / 100 == 7 && ((number / 10) % 10) == 8))
				{
					if (number % 10 == 9)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			}
		}
		number++;
	}
}
