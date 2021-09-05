/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   b_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_stack(t_stack **orig, t_stack **dest)
{
	op_p_stack(orig, dest);
	ft_putstr_fd("pb\n", 1);
}

void	sb_stack(t_stack **top)
{
	op_s_stack(top);
	ft_putstr_fd("sb\n", 1);
}

void	rb_stack(t_stack **top)
{
	op_r_stack(top);
	ft_putstr_fd("rb\n", 1);
}

void	rrb_stack(t_stack **top)
{
	op_rr_stack(top);
	ft_putstr_fd("rrb\n", 1);
}
