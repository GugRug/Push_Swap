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
	p_stack(a, b);
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
	t_stack *a;
	t_stack *b;

	a = (t_stack *)ft_calloc(1, sizeof (t_stack));
	b = (t_stack *)ft_calloc(1, sizeof (t_stack));
	a = parser(argc, argv);

	char **teste = ft_split("batata&3 9 7 5 2", '&');
	b = parser(argc, teste);
	oper_test(&a, &b);
	print_stack(a);
	print_stack(b);
	//operations
	return (0);
}
