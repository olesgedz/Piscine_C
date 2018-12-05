/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:48:28 by jblack-b          #+#    #+#             */
/*   Updated: 2018/10/07 22:49:09 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	void *data;
	int	 isint;
	struct s_stack  *next;
}	t_stack;


t_stack		*ft_stack_init(void *data, int isint)
{
	t_stack *new;
	new = (t_stack*)malloc(sizeof(t_stack));
	if (new)
	{
		new->data = data;
		new->next = NULL;
		new->isint = isint;
	}
	return (new);
}

int		ft_stack_print(t_stack *stack_begin)
{
	if(stack_begin != NULL)
		while (stack_begin != NULL)
		{
			if (!(stack_begin->isint))
				printf("%s ", (char*)stack_begin->data);
			else
				printf("%d ", *(int*)stack_begin->data);
			stack_begin = stack_begin->next;
		}
		printf("\n");
	
	return (0);
}

void	ft_stack_push(t_stack **stack_begin, void *data, int isint)
{
	t_stack *new;
	if (stack_begin && (new = ft_stack_init(data,isint)))
	{

		new->next = *stack_begin;
		*stack_begin = new;
	}
	else
	{
		*stack_begin = ft_stack_init(data, isint);
	}
}

int		ft_stack_is_empty(t_stack *stack_begin)
{
	if (stack_begin == NULL)
		return (1);
	return (0);
}

void		*ft_stack_pop(t_stack **stack_begin)
{
	void *temp;
	ft_stack_print(*stack_begin);
	if (*stack_begin != NULL)
	{
		temp = (*stack_begin)->data;
		*stack_begin  = (*stack_begin)->next;
		return (temp);
	}
	return (NULL);
	
}

void		*ft_stack_peek(t_stack *stack_begin)
{
	
	if(stack_begin != NULL)
	{
		while (stack_begin != NULL)
		{
			return (stack_begin->data);
		}
	}
	return (NULL);
}

int		ft_is_operand(char ch)
{ 
	return ((ch >= '0' && ch <= '9')); 
}

int		ft_prec(char ch)
{
	if (ch == '+' || ch == '-')
		return (1);
	if (ch == '*' || ch == '/' || ch == '%')
		return (2);
	return (-1);
}
char*	ft_strdb(char*str)
{
	char *strcp;
	int i;

	i = 0;
	strcp = (char*)malloc(sizeof(str));
	while (str[i] != '\0')
	{
		strcp[i] = str[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}

int  ft_atoi(char *str, int *i)
{
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	while ((str[*i] == '\n') || (str[*i] == '\t') || (str[*i] == '\v') ||
		(str[*i] == ' ') || (str[*i] == '\f') || (str[*i] == '\r'))
		*i = *i + 1;
		if (str[*i] == '-')
			negative = 1;
		if (str[*i] == '+' || str[*i] == '-')
			*i = *i + 1;
		while (str[*i] && (str[*i] >= '0') && (str[*i] <= '9'))
		{
			nbr *= 10;
			nbr += (int)str[*i] - '0';
			*i = *i + 1;
		}
		if (negative == 1)
			return (-nbr);
		else
			return (nbr);
}

int		ft_infix_postfix(char *exp)
{
	t_stack		*stack;
	int i;
	int k;
	int temp;

	temp = 0;
	i = 0;
	k = -1;
	char *exp2;
	stack = ft_stack_init(&i,1);
	ft_stack_pop(&stack);
	exp2 = ft_strdb(exp);
	while (exp2[i] != '\0')
	{
		if (ft_is_operand(exp[i]) && (temp = ft_atoi(exp,&i)))
			printf("c:%d ",temp);
		else
		{
			while (!ft_stack_is_empty(stack) && ft_prec(exp[i]) <= ft_prec(*(char*)ft_stack_peek(stack)))
					exp2[++k] = *(char*)ft_stack_pop(&stack);
			ft_stack_push(&stack, &exp[i], 0);
		}

		i++;
	}
	ft_stack_print(stack);
	return (0);
}

/*int		ft_calc_postfix(char* exp)
{
	t_stack stack;
	int i;

	i = 0;
	stack = ft_stack_init(&stack, &i);
	ft_stack_pop(&stack);
	if (!stack) return (-1);
	while (exp[i])
	{
		if
		i++;
	}
}
*/
int main(void)
{
	char exp[] = "123 + 32 * 4"; 
	 
	int i = 11;
	int a = 12;
	int h = 23;
	ft_infix_postfix(exp);

	t_stack *stack;
	/*stack = ft_stack_init(&i, 1);
	ft_stack_push(&stack, &h, 1);
	ft_stack_push(&stack, "lol",0);
	ft_stack_print(stack);
*/
	/*
	ft_stack_print(stack);
	ft_stack_pop(&stack);
	ft_stack_print(stack);
	ft_stack_pop(&stack);
	ft_stack_push(&stack, &a);
	ft_stack_print(stack);
	printf("%d", *ft_stack_peek(stack));
	*/
	return (0);
}
