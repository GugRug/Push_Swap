/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

void	oper_test(t_stack **a, t_stack **b)
{
	pa_stack(a, b);
	// p_stack(a, b);
	// p_stack(a, b);
	// p_stack(a, b);
	// s_stack(a);
	// rr_stack(a);
	// rr_stack(a);
	// rr_stack(a);
	// r_stack(a);
	// r_stack(a);
	// s_stack(a);
	// s_stack(b);
}

void	print_stack(t_stack *stack)
{
	printf("\nTeste:\n\n");
	while (stack)
	{
		printf("|%d|\n", stack->v);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	//need to change the global variable in error function to be local
	t_world	*w;

	w = (t_world *)ft_calloc(1, sizeof (t_world));
	w->a = (t_stack *)ft_calloc(1, sizeof (t_stack));
	// w->a = NULL;
	// w->b = NULL;
	w->a = parser(argc, argv);

	sort_stack(w);
	// char **teste = ft_split("batata&3 9 7 5 2", '&');
	// w->b = parser(argc, teste);
	//oper_test(&(w->a), &(w->b));
	// print_stack(w->a);
	//print_stack(w);
	//clean lists
	return (0);
}
