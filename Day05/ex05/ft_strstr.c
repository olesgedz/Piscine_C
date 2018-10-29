/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:32:22 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/24 15:14:18 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[n])
		{
			i++;
			n++;
			if (to_find[n] == '\0')
				return (&str[i - n]);
		}
		i -= n;
		i++;
	}
	return (NULL);
}
