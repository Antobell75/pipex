/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:13:34 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/15 16:00:59 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#ifndef PIPEX_H
# define PIPEX_H
#endif

typedef struct s_pipex
{
	int		pipefd[2];
	int		pid1;
	int		pid2;
	char	*cmd1;
	char	*cmd2;
	char	**envp;
	char	**args1;
	char	**args2;
	int		infile;
	int		outfile;
}	t_pipex;

void	init_pipe(t_pipex *pipe);