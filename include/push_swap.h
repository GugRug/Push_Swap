/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdbool.h>
# include <errno.h>
# include "libft.h"
# include "swap.h"
# include "ft_error.h"

/*
**	--------------- FUNCTION DECLARATIONS ---------------
*/

/*
**	main.c
*/

/*
**	stack/stack.c
*/
t_stack	*stack_last(t_stack *lst);
void	stack_add_back(t_stack **lst, t_stack *new);
t_stack	*stack_new(int value);
void	stack_clear(t_stack **lst);

/*
**	stack/operations.c
*/
void	p_stack(t_stack **orig, t_stack **dest);
void	s_stack(t_stack **top);
void	r_stack(t_stack **top);
void	rr_stack(t_stack **top);

/*
**	parser/normalize.c
*/
void	normalize(t_stack *stack);
void	normalize_min(t_stack *stack);
int		get_min_not_normalized(t_stack *stack);

/*
**	parser/parser.c
*/
t_stack	*parser(int argc, char **argv);
t_stack	*build_stack(int argc, char **str);
bool	check_only_numbers(int argc, char **argv);

#endif
