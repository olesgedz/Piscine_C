/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:50:18 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/28 23:15:59 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_n_words(char *str);
int		ft_strlen(char *str);
char	**ft_split_whitespaces(char *str);
int		ft_ln_w(char *str, int i);

int		ft_ln_w(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**dst;
	int		k;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if ((dst = malloc(sizeof(char*) * (ft_n_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((dst[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				dst[j][k++] = str[i++];
			dst[j++][k] = '\0';
		}
	}
	dst[j] = NULL;
	return (dst);
}

int		ft_n_words(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		{
			words++;
			while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
				i++;
		}
		i++;
	}
	return (words + 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}
