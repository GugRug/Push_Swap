/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_last(t_stack *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		tmp = stack_last(*lst);
		tmp->next = new;
		new->prev = tmp;
	}
}

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = (t_stack *)ft_calloc(1, sizeof (t_stack));
	if (!(new))
		return (NULL);
	new->v = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	stack_clear(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = NULL;
		*lst = tmp;
	}
	*lst = NULL;
}
