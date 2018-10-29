/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:40:49 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/20 14:35:45 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	int asccode;
	int counter;

	ascCode = 97;
	counter = 0;
	while (counter < 26)
	{
		counter++;
		ft_putchar(asccode);
		asccode++;
	}
}
