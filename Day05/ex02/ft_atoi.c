/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:23:10 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/24 12:56:36 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pass(char *str, int *i, int *isneg);

int		ft_atoi(char *str)
{
	int n;
	int i;
	int isneg;

	n = 0;
	i = -1;
	isneg = 0;
	if (0 == ft_pass(str, &i, &isneg))
	{
		return (0);
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-n);
	return (n);
}

int		ft_pass(char *str, int *i, int *isneg)
{
	while (!((str[*i] >= '0') && (str[*i] <= '9')))
	{
		if (str[*i] == '-')
		{
			if (!(str[*i + 1] >= '0' && str[*i + 1] <= '9'))
				return (0);
			if (*isneg == 1)
				return (0);
			*isneg = 1;
		}
		*i = *i + 1;
	}
	return (1);
}
