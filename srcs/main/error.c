/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "ft_error.h"

static void	ft_putstr_error(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}

void	message_and_exit(t_error code, char *str)
{
	ft_putstr_error("Error\n", FT_STDERR_FILENO);
	if (errno && code == E_SYSTEM)
		perror("");
	else if (code > 0)
	{
		ft_putstr_error(g_error[code], FT_STDERR_FILENO);
		if (str)
		{
			ft_putstr_error(": ", FT_STDERR_FILENO);
			ft_putstr_error(str, FT_STDERR_FILENO);
		}
		ft_putstr_error("\n", FT_STDERR_FILENO);
	}
	else
		ft_putstr_error("Fatal Error\n", FT_STDERR_FILENO);
	exit(FT_EXIT_FAILURE);
}
