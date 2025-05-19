/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:13:09 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/18 17:33:19 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char **av, char **envp)
{
	t_pipex pipe;

	if (ac != 5)
	{
		ft_printf("Error: Wrong number of arguments\n");
		return (1);
	}
	start_pipex(&pipe, av, envp);
	return (0);
}
