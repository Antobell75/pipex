/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:42:49 by anbellar          #+#    #+#             */
/*   Updated: 2025/06/09 18:42:50 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include "./printf/ft_printf.h"
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <errno.h>

void	ft_error(char *str);
int		open_file(char *file, int in_or_out);
void	ft_free_tab(char **tab);
char	**get_env_path(char **envp);
char	*get_path(char *cmd, char **env);
void	exec(char *cmd, char **env);
void	child(char **av, int *p_fd, char **env);
void	child2(char **av, int *p_fd, char **env);

#endif