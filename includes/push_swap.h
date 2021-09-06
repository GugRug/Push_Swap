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
**	main/sort.c
*/
void		sort_stack(t_world *w);

/*
**	stack/stack.c
*/
t_stack		*stack_last(t_stack *lst);
void		stack_add_back(t_stack **lst, t_stack *new);
t_stack		*stack_new(int value);
void		stack_clear(t_stack **lst);

/*
**	stack/operations.c
*/
void		op_p_stack(t_stack **orig, t_stack **dest);
void		op_s_stack(t_stack **top);
void		op_r_stack(t_stack **top);
void		op_rr_stack(t_stack **top);

/*
**	stack/a_operations.c
*/
void		pa_stack(t_stack **orig, t_stack **dest);
void		sa_stack(t_stack **top);
void		ra_stack(t_stack **top);
void		rra_stack(t_stack **top);

/*
**	stack/b_operations.c
*/
void		pb_stack(t_stack **orig, t_stack **dest);
void		sb_stack(t_stack **top);
void		rb_stack(t_stack **top);
void		rrb_stack(t_stack **top);

/*
**	stack/double_operations.c
*/
void		ss_stack(t_stack **a, t_stack **b);
void		rr_stack(t_stack **a, t_stack **b);
void		rrr_stack(t_stack **a, t_stack **b);

/*
**	parser/normalize.c
*/
void		normalize(t_stack *stack, long int min);
void		normalize_min(t_stack *stack, long int min);
long int	get_min_not_normalized(t_stack *stack, long int max);

/*
**	parser/parser.c
*/
t_stack		*parser(char **argv);
t_stack		*build_stack(char **str, int *min);
bool		check_only_numbers(char **argv);

/*
**	utils/utils.c
*/
int			get_min_v(t_stack *stack);
int			get_max_v(t_stack *stack);
bool		stack_is_sorted(t_stack *stack);
void		find_and_rotate_to_top_a(t_world *w, int target);

/*
**	utils/clean.c
*/
void		stackclear(t_stack **lst);

#endif
