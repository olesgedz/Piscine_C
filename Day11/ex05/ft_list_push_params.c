/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:37:11 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/03 21:36:40 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*l_argv;
	t_list	*first;

	l_argv = NULL;
	first = NULL;
	i = 1;
	first = l_argv;
	while (i < ac)
	{
		ft_list_push_front(&l_argv, av[i]);
		i++;
	}
	return (l_argv);
}
