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

int	main(int argc, char **argv)
{
	t_world	*w;

	if (argc < 2)
		return (0);
	w = (t_world *)ft_calloc(1, sizeof (t_world));
	w->a = parser(argv);
	sort_stack(w);
	stackclear(&(w->a));
	stackclear(&(w->b));
	free(w);
	w = NULL;
	return (0);
}
