/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:27:06 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/30 17:44:29 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
