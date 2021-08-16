/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_stack(t_stack **a, t_stack **b)
{
	sa_stack(a);
	sb_stack(b);
}

void	rr_stack(t_stack **a, t_stack **b)
{
	ra_stack(a);
	rb_stack(b);
}

void	rrr_stack(t_stack **a, t_stack **b)
{
	rra_stack(a);
	rrb_stack(b);
}
