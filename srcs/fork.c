/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:46:42 by dwsasd            #+#    #+#             */
/*   Updated: 2025/05/18 19:47:04 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	fork_process1(t_pipex *pipe)
{
	pipe->pid1 = fork();
	if (pipe->pid1 == -1)
		ft_error(pipe, "Fork error");
	if (pipe->pid1 == 0)
		error_child(pipe);
	pipe->pid2 = fork();
	if (pipe->pid2 == -1)
		ft_error(pipe, "Fork error");
	if (pipe->pid2 == 0)
		error_child(pipe);
}

void	fork_process2(t_pipex *pipe)
{
	pipe->pid1 = fork();
	if (pipe->pid1 == -1)
		ft_error(pipe, "Fork error");
	if (pipe->pid1 == 0)
		error_child(pipe);
	pipe->pid2 = fork();
	if (pipe->pid2 == -1)
		ft_error(pipe, "Fork error");
	if (pipe->pid2 == 0)
		error_child(pipe);
}
