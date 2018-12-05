/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:40:10 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 23:34:38 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *link;
	t_list *next_link;

	link = *begin_list;
	while (link->next != NULL)
	{
		next_link = link->next;
		free(link);
		link = next_link;
	}
	*begin_list = NULL;
}
