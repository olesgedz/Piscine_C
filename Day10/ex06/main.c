/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 19:29:54 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/30 23:26:09 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft.h>

int		ft_do_op(int *a, int *b, char **argv)
{
	if (argv[2][0] == '+')
		ft_putnbr(*a + *b);
	else if (argv[2][0] == '-')
		ft_putnbr(*a - *b);
	else if (argv[2][0] == '*')
		ft_putnbr(*a * *b);
	else if (argv[2][0] == '/')
	{
		if (*b == 0 && ft_putstr("Stop : division by zero\n"))
			return (0);
		ft_putnbr(*a / *b);
	}
	else if (argv[2][0] == '%')
	{
		if (*b == 0 && ft_putstr("Stop : modulo by zero\n"))
			return (0);
		ft_putnbr(*a % *b);
	}
	else
		ft_putnbr(0);
	return (0);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (argc != 4 || (ft_strlen(argv[2]) != 1))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_do_op(&a, &b, argv);
	return (0);
}
