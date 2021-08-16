/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

/*
**	--------------- ELEMENTS TYPEDEFS ---------------
*/
typedef struct s_stack
{
	int				v;
	int				max;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

#endif
