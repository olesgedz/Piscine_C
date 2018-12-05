/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 23:20:05 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 23:36:50 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list->next != NULL)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
