/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:13:34 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/18 19:35:21 by dwsasd           ###   ########.fr       */
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
	char	**envp;
	char	**args1;
	char	**args2;
	int		infile;
	int		outfile;
}	t_pipex;

void	init_pipe(t_pipex *pipe);
char	**ft_split(const char *s, char c);
void	ft_error(t_pipex *pipe, char *msg);
void	init_pipex(t_pipex *pipe, char **av, char **envp);
void	start_pipex(t_pipex *pipe, char **av, char **envp);
void	error_child(t_pipex *pipe);
