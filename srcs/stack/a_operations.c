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
	op_p_stack(orig, dest);
	ft_putstr_fd("pa\n", 1);
}

void	sa_stack(t_stack **top)
{
	op_s_stack(top);
	ft_putstr_fd("sa\n", 1);
}

void	ra_stack(t_stack **top)
{
	op_r_stack(top);
	ft_putstr_fd("ra\n", 1);
}

void	rra_stack(t_stack **top)
{
	op_rr_stack(top);
	ft_putstr_fd("rra\n", 1);
}
