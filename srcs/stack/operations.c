/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

void	p_stack(t_stack **orig, t_stack **dest)
{
	t_stack	*tmp;

	tmp = NULL;
	if ((*orig) && (*dest))
	{
		tmp = (*orig);
		(*orig) = (*orig)->next;
		(*orig)->prev = NULL;
		tmp->next = (*dest);
		(*dest)->prev = tmp;
		(*dest) = (*dest)->prev;
	}
}

void	s_stack(t_stack **top)
{
	t_stack	*tmp;

	tmp = NULL;
	if ((*top) && (*top) && (*top)->next)
	{
		tmp = (*top)->next;
		(*top)->next = tmp->next;
		tmp->next->prev = (*top);
		(*top)->prev = tmp;
		tmp->next = (*top);
		(*top) = (*top)->prev;
	}
}

void	r_stack(t_stack **top)
{
	t_stack	*last;
	t_stack	*head;

	last = NULL;
	if ((*top) && (*top)->next)
	{
		head = (*top)->next;
		last = stack_last((*top));
		(*top)->prev = last;
		(*top)->next->prev = NULL;
		last->next = (*top);
		(*top)->next = NULL;
		(*top) = head;
	}
}

void	rr_stack(t_stack **top)
{
	t_stack	*last;

	last = NULL;
	if ((*top) && (*top)->next)
	{
		last = stack_last((*top));
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = (*top);
		(*top)->prev = last;
		(*top) = (*top)->prev;
	}
}
