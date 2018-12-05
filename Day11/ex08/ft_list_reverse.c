/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 23:14:58 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 23:17:35 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *start;
	t_list *temp;

	start = NULL;
	while (*begin_list)
	{
		temp = (*begin_list)->next;
		(*begin_list)->next = start;
		new_start = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = new_start;
}
