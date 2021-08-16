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

int	main(int argc, char *argv)
{
	t_stack a;
	t_stack b;

	a = *(parser(argc, argv));
	printf("Teste: %d", a.v);
	//operations
	return (0);
}
