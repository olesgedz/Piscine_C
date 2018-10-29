/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 18:22:17 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/24 18:28:04 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z'))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}
