/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parser(int argc, char **argv)
{
	int		min;
	char	**temp;
	t_stack *stack;

	if (argc < 1)
		message_and_exit(E_N_ARGS, "Need at least 1 argument");
	argv++;
	if (check_only_numbers(argv))
	{
		temp = ft_split(argv[0], ' ');
		stack = build_stack(temp, &min);
		//free_array(temp);
	}
	else
	{
		temp = argv;
		stack = build_stack(temp, &min);
	}
	normalize(stack, min);
	return (stack);
}

t_stack	*build_stack(char **str, int *min)
{
	int		i;
	t_stack *stack;
	t_stack *new;

	i = 0;
	stack = NULL;
	*min = ft_atoi(str[0]);
	while (str[i])
	{
		new = stack_new(ft_atoi(str[i]));
		stack_add_back(&stack, new);
		if (*min > new->v)
			*min = new->v;
		i++;
	}
	return (stack);
}

bool	check_only_numbers(char **argv)
{
	int		i;
	int		j;
	bool	split;

	i = 0;
	j = 0;
	split = false;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])
				|| argv[i][j] == ' '
				|| (argv[i][j] == '-' && ft_isdigit(argv[i][j + 1]))
				|| (argv[i][j] == '+' && ft_isdigit(argv[i][j + 1]))))
				message_and_exit(E_C_ARGS, argv[i]);
			if (argv[i][j] == ' ')
				split = true;
			j++;
		}
		i++;
	}
	return (split);
}
