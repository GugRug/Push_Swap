/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

static void	shift_bit_a(t_world *w)
{
	t_stack	*a;

	a = w->a;
	while (a)
	{
		a->v = (a->v) >> 1;
		a = a->next;
	}
}

static void	put_all_to_a(t_world *w)
{
	while (w->b)
		pa_stack(&(w->b), &(w->a));
}

void	radix_sort(t_world *w)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (!stack_is_sorted(w->a) && j < 10)
	{
		i = 0;
		while (i < w->size)
		{
			if (!(w->a->v & 0x01))
				pb_stack(&(w->a), &(w->b));
			else
				ra_stack(&(w->a));
			i++;
		}
		put_all_to_a(w);
		shift_bit_a(w);
		j++;
	}
}
