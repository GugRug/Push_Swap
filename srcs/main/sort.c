/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

/*
** Need to select here witch algorithm to use in each lst size case
*/

#include "push_swap.h"

/*
**	--------------- FUNCTION DECLARATIONS ---------------
*/
static void	sort_stack_short(t_world *w);
static void	sort_stack_long(t_world *w);
static void	shift_bit_a(t_world *w);
static void	put_all_to_a(t_world *w);

/*
**	---------------- FUNCTION DEFINITIONS ----------------
*/
void	sort_stack(t_world *w)
{
	w->size = ft_lstsize((t_list *)(w->a));
	if (stack_is_sorted(w->a))
		return ;
	if (w->size <= 5)
		sort_stack_short(w);
	else
		sort_stack_long(w);
}

static void	sort_stack_short(t_world *w)
{
	if (w->size > 3)
	{
		find_and_rotate_to_top_a(w, get_min_v(w->a));
		pb_stack(&(w->a), &(w->b));
		if (w->size == 5)
		{
			find_and_rotate_to_top_a(w, get_min_v(w->a));
			pb_stack(&(w->a), &(w->b));
		}
	}
	if (w->a->v == get_max_v(w->a))
		ra_stack(&(w->a));
	else if (!stack_is_sorted(w->a) && w->a->next->v == get_max_v(w->a))
		rra_stack(&(w->a));
	if (!stack_is_sorted(w->a))
		sa_stack(&(w->a));
	while (w->b)
		pa_stack(&(w->b), &(w->a));
}

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

static void	sort_stack_long(t_world *w)
{
	int		i;

	i = 0;
	while (!stack_is_sorted(w->a))
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
	}
}
