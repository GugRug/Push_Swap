/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# include <errno.h>

#define	FT_EXIT_FAILURE		1
#define	FT_STDERR_FILENO	2

typedef enum e_error{
	E_GENERIC,
	E_SYSTEM,
	E_N_ARGS,
	E_C_ARGS,
	E_FILE,
	MAX_ERROR
}				t_error;

static char	*g_error[MAX_ERROR] = {
	"Error"
	"System error",
	"Number of args",
	"Bad Argument",
	"No file finded, check the name and the path to it again"
};

/*
**	--------------- FUNCTION DECLARATION ---------------
*/
void	message_and_exit(t_error code, char *str);

#endif
