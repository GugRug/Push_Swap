/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

/*
** Return long long int with a string entry.
*/

#include "libft.h"

static int	ft_set_entry(const char **str, int *signal)
{
	int	pass;

	pass = 0;
	while (*str && (**str == ' ' || **str == '\n' || **str == '\t'
			|| **str == '\v' || **str == '\f' || **str == '\r'))
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*signal *= -1;
		(*str)++;
		pass++;
	}
	if (pass > 1)
		return (0);
	return (1);
}

long long int	ft_atolli(const char *str)
{
	long long int	soma;
	int				signal;

	soma = 0;
	signal = 1;
	if (!(ft_set_entry(&str, &signal)))
		return (0);
	while (*str && *str >= '0' && *str <= '9')
	{
		soma = soma * 10 + (*str - '0');
		++str;
	}
	return (soma * signal);
}
