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

/*
**	--------------- FUNCTION DECLARATIONS ---------------
*/
static int	atoi_check_overflow(char *str);
static void	check_duplicate(t_stack *stack);

/*
**	---------------- FUNCTION DEFINITIONS ----------------
*/
t_stack	*parser(char **argv)
{
	int		min;
	char	**temp;
	t_stack	*stack;

	argv++;
	if (check_only_numbers(argv))
	{
		temp = ft_split(argv[0], ' ');
		stack = build_stack(temp, &min);
		ft_free_array(temp);
		if (argv[1] != NULL)
			message_and_exit(NULL);
	}
	else
	{
		temp = argv;
		stack = build_stack(temp, &min);
	}
	check_duplicate(stack);
	normalize(stack, min);
	return (stack);
}

t_stack	*build_stack(char **str, int *min)
{
	int		i;
	t_stack	*stack;
	t_stack	*new;

	i = 0;
	stack = NULL;
	*min = atoi_check_overflow(str[0]);
	while (str[i])
	{
		new = stack_new(atoi_check_overflow(str[i]));
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
				message_and_exit(NULL);
			if (argv[i][j] == ' ')
				split = true;
			j++;
		}
		i++;
	}
	return (split);
}

static int	atoi_check_overflow(char *str)
{
	long long int	overflow;

	overflow = ft_atolli(str);
	if (overflow > FT_MAX_INT
		|| overflow < FT_MIN_INT)
		message_and_exit(NULL);
	return (ft_atoi(str));
}

static void	check_duplicate(t_stack *stack)
{
	t_stack		*tmp;
	int			v;

	while (stack)
	{
		tmp = stack->next;
		v = stack->v;
		while (tmp)
		{
			if (v == tmp->v)
				message_and_exit(NULL);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}
