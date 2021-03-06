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
	long int		v;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

typedef struct s_world
{
	int				size;
	t_stack			*a;
	t_stack			*b;
}				t_world;

#endif
