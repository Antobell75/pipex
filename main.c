/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:13:09 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/15 16:04:39 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void init_pipe(t_pipex *pipe)
{
	pipe->infile = -1;
	pipe->outfile = -1;
	pipe->pid1 = -1;
	pipe->pid2 = -1;
	pipe->cmd1 = NULL;
	pipe->cmd2 = NULL;
	pipe->args1 = NULL;
	pipe->args2 = NULL;
	pipe->envp = NULL;
	if (pipe->pipefd == -1)
		ft_error(pipe, "Pipe error");
}

int	main(int ac, char **av)
{
	t_pipex pipe;

	if (ac != 5)
	{
		ft_printf("Error: Wrong number of arguments\n");
		return (1);
	}
	
	return (0);
}
