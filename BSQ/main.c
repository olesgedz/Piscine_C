/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:27:37 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/08 23:11:29 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h> // delete it xD
#include <fcntl.h>
#include "ft.h"
#define BUF_SIZE 10
typedef struct s_point
{
	int x; // make it unsigned
	int y;

}				t_point;

typedef struct s_sqr
{
	int x;		//left top of [0][0]
	int y;
	int size;
}				t_sqr;

t_point		*ft_point_init(int x, int y)
{
	t_point *new;

	if(!(new = (t_point*)(malloc(sizeof(t_point)))))
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}

t_sqr	*ft_sqr_init(int x, int y, int size)
{
	t_sqr *new;

	if(!(new = (t_sqr*)(malloc(sizeof(t_point)))))
		return (NULL);
	new->x = x;
	new->y = y;
	new -> size = size;
	return (new);
}

						// make erase functions

int		ft_check_if_point_included(t_sqr *sqr, t_point *point)
{
	sqr->size -= 1; //explain that xD
	if (sqr->x <= point->x && point->x <= (sqr->x + sqr->size))
		if (sqr->y <= point->y && point->y <= (sqr->y + sqr->size))
			return (1); //we got an obsticale
	return (0);
}

int		ft_print_arr(char** str) /// ONLY MY STRINGS
{
	int i;
	i = 0;
	while(*str[i] != '\0')
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}

int		ft_printline(char **argv)
{
	int fd;
	char buf[1];
	int rt;
	int j = 0;
	int k = 0;
	char map[1000][1000];
	fd = open(argv[1], O_RDWR);
	while ((rt = read(fd, buf,1)))
	{
		if(buf[0] == '\n')
		{
			map[j][k] = '\0';
			j++;
			k = 0;
		}
		else
		{
		map[j][k] = buf[0];
		k++;
		}
	}
	map[0][39] = '\0';
	//ft_print_arr()
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", map[i]);
	}
	//ft_print_arr((char**)map);

	return (0);
}



int		ft_read_file(int *argc, char **argv)
{
	int		fd;
	//int		ret;
	char	buf[BUF_SIZE + 1];
	//char **map;
	int i;
	i = 1; // ONE cause of ./a.out
	*argc +=1;
		fd = open(argv[i], O_RDWR);
		//number of lines
		read(fd, buf, 1);
		printf("%s", buf);
		printf("number of lines %d", ft_atoi(buf));
		if (fd == -1)
			return (-1);
		if (close(fd) == -1 && ft_putstr("close() error\n"))
			return (-1);
		//i++;
	//}
	return (0);
}


int		main(int argc, char **argv)
{
	//char** str;
	char *array [4];
	array[0] = "asd";
	array[1] = "bcdf";
	array[2] = "safd";
	array[3] = "\0";
	t_sqr sqr;
	argc +=1;
	sqr = *ft_sqr_init(0, 0, 3);
	//printf("you made a sqr of %d %d %d\n", sqr.x, sqr.y, sqr.size);
	t_point point;
	point = *ft_point_init(3, 0);
	//printf("the point is %d", ft_check_if_point_included(&sqr,&point));
	//ft_read_file(&argc, argv);
	ft_printline(argv);
	//ft_print_arr(array);
	return (0);
}
