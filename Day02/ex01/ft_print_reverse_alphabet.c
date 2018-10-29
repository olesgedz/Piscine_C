/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:40:49 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/20 14:49:27 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	int counteri;
	int asccode;

	asccode = 122;
	counter = 0;
	while (counter < 26)
	{
		counter++;
		ft_putchar(ascCode);
		ascCode--;
	}
}
