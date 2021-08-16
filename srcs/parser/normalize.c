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

//need to implement return max and store the max value in some another way

void	normalize(t_stack *stack, int min)
{
	int		max;
	t_stack	*ptr;

	max = 0;
	normalize_min(stack, min);
	min = get_min_not_normalized(stack, max);
	while (min != -1)
	{
		ptr = stack;
		while (ptr)
		{
			if(ptr->v > max)
				ptr->v -= (min - 1 - max);
			ptr = ptr->next;
		}
		(max)++;
		min = get_min_not_normalized(stack, max);
	}
}

void	normalize_min(t_stack *stack, int min)
{
	t_stack	*ptr;

	ptr = stack;
	while (ptr)
	{
		ptr->v -= min;
		ptr = ptr->next;
	}
}

int		get_min_not_normalized(t_stack *stack, int max)
{
	int	min;

	min = -1;
	while (stack && min == -1)
	{
		if (stack->v > max)
			min = stack->v;
		stack = stack->next;
	}
	while (stack)
	{
		if (stack->v < min && stack->v > max)
			min = stack->v;
		stack = stack->next;
	}
	return (min);
}
