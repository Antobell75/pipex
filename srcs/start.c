/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:03:51 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/18 19:47:59 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	init_pipe(t_pipex *pipe)
{
	pipe->infile = -1;
	pipe->outfile = -1;
	pipe->pid1 = -1;
	pipe->pid2 = -1;
	pipe->args1 = NULL;
	pipe->args2 = NULL;
	pipe->envp = NULL;
	if (pipe->pipefd == -1)
		ft_error(pipe, "Pipe error");
}

void	init_pipex(t_pipex *pipe, char **av, char **envp)
{
	if (!envp)
		ft_error(pipe, "Envp malloc error");
	pipe = malloc(sizeof(t_pipex));
	if (!pipe)
		ft_error(pipe, "Pipe malloc error");
	pipe->infile = open(av[1], O_RDONLY);
	if (pipe->infile == -1)
		ft_error(pipe, "Infile open error");
	pipe->outfile = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (pipe->outfile == -1)
		ft_error(pipe, "Outfile open error");
	pipe->envp = envp;
	pipe->args1 = ft_split(av[2], ' ');
	pipe->args2 = ft_split(av[3], ' ');
	if (!pipe->args1 || !pipe->args2)
		ft_error(pipe, "Args split error");
}

void	start_pipex(t_pipex *pipe, char **av, char **envp)
{
	init_pipe(pipe);
	init_pipex(pipe, av, envp);
	fork_process1(pipe);
	dup2(pipe->infile, STDIN_FILENO);
	dup2(pipe->outfile, STDOUT_FILENO);
	waitpid(pipe->pid1, NULL, 0);
	waitpid(pipe->pid2, NULL, 0);
	close_pipe(pipe);
}

void	close_pipe(t_pipex *pipe)
{
	close(pipe->infile);
	close(pipe->outfile);
	close(pipe->pipefd[0]);
	close(pipe->pipefd[1]);
	free(pipe->args1);
	free(pipe->args2);
	free(pipe->envp);
	free(pipe);
}

void	init_child(t_pipex *pipe)
{
	
}
