/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 20:30:47 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/27 21:08:28 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != "\0")
	{
		str[i] = str[i] + 42;
		if (str[i] > 127)
			str[i] = str[i] - 128;
		if (str[i] < 32)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
