/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:07:38 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 23:36:17 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	count;

	current = begin_list;
	count = 0;
	while ((current != NULL) && (count < nbr))
	{
		count++;
		current = current->next;
		if (count == nbr - 1)
			return (current - 1);
	}
	return (NULL);
}
