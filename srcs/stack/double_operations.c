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
	op_s_stack(a);
	op_s_stack(b);
	ft_putstr_fd("ss\n", 1);
}

void	rr_stack(t_stack **a, t_stack **b)
{
	op_r_stack(a);
	op_r_stack(b);
	ft_putstr_fd("rr\n", 1);
}

void	rrr_stack(t_stack **a, t_stack **b)
{
	op_rr_stack(a);
	op_rr_stack(b);
	ft_putstr_fd("rrr\n", 1);
}
