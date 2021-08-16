/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   normalize.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

/*
** normalize funtion format all values v at the stack to more usefull values,
** without changing the value order.
** ex (29, -39187, 898) -> (1, 0, 2)
*/

#include "push_swap.h"

void	normalize(t_stack *stack)
{
	t_stack	*ptr;
	int		min;

	ptr = stack;
	stack->max = 0;
	normalize_min(stack);
	min = get_min_not_normalized(stack);
	while (min != -1)
	{
		while (ptr)
		{
			if(ptr->v > ptr->max)
				ptr->v -= (min - 1 - stack->max);
			ptr = ptr->next;
		}
		(stack->max)++;
		min = get_min_not_normalized(stack);
	}
}

void	normalize_min(t_stack *stack)
{
	while (stack)
	{
		stack->v -= stack->min;
	}
}

int		get_min_not_normalized(t_stack *stack)
{
	int	min;

	min = -1;
	while (stack && min == -1)
	{
		if (stack->v > stack->max)
			min = stack->v;
		stack = stack->next;
	}
	while (stack)
	{
		if (stack->v < min && stack->v > stack->max)
			min = stack->v;
		stack = stack->next;
	}
	return (min);
}
