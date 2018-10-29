-/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 23:21:01 by jblack-b          #+#    #+#             */
/*   Updated: 2018/09/28 23:22:19 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <stdlib.h>

# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

# define TRUE		1
# define FALSE		0

# define EVEN(x)	(!((x) % 2))

typedef int			t_bool;

#endif
