/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:45:15 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 20:23:21 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

void	ft_push__back(t_list **begin_list, void *data)
{
	t_list *element;
	t_list *new;

	if (begin_list == NULL)
		return ;
	if ((new = ft_create_elem(data)) == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = new;
	}
	else
	{
		element = *begin_list;
		while (element->next != NULL)
			element = element->next;
		element->next = new;
	}
}
