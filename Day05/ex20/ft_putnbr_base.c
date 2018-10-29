/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 14:35:41 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/25 17:37:16 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		check(char *base, int *system);
int		ifneg(int *nbr, char *base);
int		ft_str_is_printable(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int result[26];
	int i;
	int system;

	system = 0;
	i = 0;
	while (base[system] != '\0')
		system++;
	ft_str_is_printable(base);
	ifneg(&nbr, base);
	check(base, &system);
	while (nbr != 0)
	{
		result[i] = nbr % system;
		nbr /= system;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		ft_putchar(base[result[i]]);
		i--;
	}
}

int		check(char *base, int *system)
{
	int j;
	int k;

	j = 0;
	k = 0;
	if (*system < 2)
		return (1);
	while (base[j] != '\0')
	{
		while (base[k] != '\0')
		{
			if ((base[j] == base[k]) && (k != j))
			{
				return (1);
			}
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}

int		ifneg(int *nbr, char *base)
{
	if (*nbr < 0)
	{
		ft_putchar('-');
		if (*nbr == -2147483648)
		{
			if (*base == 2)
			{
				ft_putchar('1');
				ft_putchar('0');
			}
			else
			{
				ft_putchar(base[2]);
			}
			*nbr = *nbr * -1 - 2000000000;
		}
		else
		{
			*nbr *= -1;
		}
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 < str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
