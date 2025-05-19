/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:01:22 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/18 19:27:25 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	ft_error(t_pipex *pipe, char *msg)
{
	ft_printf("Error: %s",msg);
	exit(EXIT_FAILURE);
}

void	error_child(t_pipex *pipe)
{
	dup2(pipe->infile, STDIN_FILENO);
	dup2(pipe->pipefd[1], STDOUT_FILENO);
	close(pipe->pipefd[0]);
	execve(pipe->args1[0], pipe->args1, pipe->envp);
	ft_error(pipe, "Execve error");
}
