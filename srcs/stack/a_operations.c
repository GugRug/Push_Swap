/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   a_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_stack(t_stack **orig, t_stack **dest)
{
	t_stack	*tmp;

	tmp = NULL;
	if ((*orig) && (*dest))
	{
		tmp = (*orig);
		(*orig) = (*orig)->next;
		if (*orig)
			(*orig)->prev = NULL;
		tmp->next = (*dest);
		(*dest)->prev = tmp;
		(*dest) = (*dest)->prev;
	}
}

void	sa_stack(t_stack **top)
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
		tmp->prev = NULL;
		(*top) = (*top)->prev;
	}
}

void	ra_stack(t_stack **top)
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

void	rra_stack(t_stack **top)
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
