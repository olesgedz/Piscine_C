/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:26:29 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/26 16:45:01 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_strcp(char *s1, char *s2);
void	*malloc(size_t size);

char	*ft_strdup(char *src)
{
	char *dub;

	if (!(dub = (char*)malloc(sizeof(*src) * ft_strlen(src) + 1)))
		return (NULL);
	ft_strcp(dub, src);
	return (dub);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

int		ft_strcp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (0);
}
