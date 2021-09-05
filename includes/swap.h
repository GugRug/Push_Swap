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

typedef enum e_stk_target{
	STK_A,
	STK_B,
	STK_AB
}				t_stk_target;

typedef struct s_stack
{
	int				v;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

typedef struct s_world
{
	int				v;
	int				size;
	int				pos;
	t_stack			*a;
	t_stack			*b;
}				t_world;

#endif
