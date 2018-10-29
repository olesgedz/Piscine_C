/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:48:28 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/06 21:21:00 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int data;
	struct s_stack  *next;
}	t_stack;


t_stack		*ft_stack_init(int *data)
{
	t_stack *new;
	new = (t_stack*)malloc(sizeof(t_stack));
	if (new)
	{
		new->data = *data;
		new->next = NULL;
	}
	return (new);
}

void	ft_stack_push(t_stack **stack_begin, int data)
{
	t_stack *new;
	if (stack_begin && (new = ft_stack_init(&data)))
	{
		new->next = *stack_begin;
		*stack_begin = new;
	}
	else
	{
		*stack_begin = ft_stack_init(&data);
	}
}
int		ft_print_stack(t_stack *stack_begin)
{
	if(stack_begin != NULL)
		while (stack_begin != NULL)
		{
			printf("%d ", stack_begin->data);
			stack_begin = stack_begin->next;
		}
		printf("\n");
	
	return (0);
}

int		ft_stack_pop(t_stack *stack_begin)
{
	int temp;

	temp = 0;
	if (stack_begin)
	{
	
		temp = stack_begin->data;
		*stack_begin = *(stack_begin)->next;
	}
	return (temp);
}


int main(void)
{
	int i = 15;
	int a = 40;
	int h = 23;
	t_stack *stack;
	stack = NULL;
	stack = ft_stack_init(&i);
	ft_stack_push(&stack, 12);
	ft_stack_push(&stack, 13);
	ft_stack_push(&stack, 14);
	ft_print_stack(stack);
	printf("%d\n", ft_stack_pop(stack));
	ft_print_stack(stack);
	//printf("%d\n", ft_stack_pop(stack));
	//printf("Hello");
	return (0);
}
