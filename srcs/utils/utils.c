/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_v(t_stack *stack)
{
	int	min;

	min = stack->v;
	while (stack)
	{
		if (min > stack->v)
			min = stack->v;
		stack = stack->next;
	}
	return (min);
}

int	get_max_v(t_stack *stack)
{
	int	max;

	max = stack->v;
	while (stack)
	{
		if (max < stack->v)
			max = stack->v;
		stack = stack->next;
	}
	return (max);
}

bool	stack_is_sorted(t_stack *stack)
{
	int	v;

	v = get_min_v(stack);
	while (stack)
	{
		if (stack->v != v)
			return (false);
		stack = stack->next;
		v++;
	}
	return (true);
}

static int	get_pos_stack(t_stack *stack, int v)
{
	int i = 1;

	while (stack)
	{
		if (stack->v == v)
			return (i);
		i++;
		stack = stack->next;
	}
	message_and_exit(E_GENERIC, "Internal error: get_pos_stack");
	return (-1);
}

void	find_and_rotate_to_top_a(t_world *w, int target)
{
	int	pos;

	pos = get_pos_stack(w->a, target);
	while (pos > 1)
	{
		if ((pos - 1) <= (w->size - pos))
			while (pos > 1)
			{
				ra_stack(&(w->a));
				pos--;
			}
		else
			while (pos > 1)
			{
				rra_stack(&(w->a));
				pos++;
				if (pos > ft_lstsize((t_list *)(w->a)))
					pos = 1;
			}
	}
}
