/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:04:35 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 21:34:03 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	if (begin_list)
	{
		count = 1;
		while (begin_list->next != NULL)
		{
			begin_list = begin_list->next;
			count++;
		}
	}
	return (count);
}
