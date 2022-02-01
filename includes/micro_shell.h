/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_shell.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:11:02 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/31 00:57:38 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MICRO_SHELL_H
# define MICRO_SHELL_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "libft.h"
# include "time.h"

typedef struct s_cmd
{
	char	*input;
	char	*cmd;
	char	*flag;
	char	*args;
	time_t	time;
}	t_cmd;

typedef struct s_minishell
{
	char	*prompt;
	char	*input;
	t_dlist	cmds;
}	t_minishell;

typedef t_minishell t_mnsh;

void	mnsh_init(t_mnsh *mnsh);


t_cmd	*parse_input(char *s);
int		exec_cmd(t_cmd *cmd);

t_cmd	*get_cmd(char *cmds, char *flags, char *args);
void	clear_cmd(t_cmd **cmd);


void	test_readline(void);
void	test_sys(void);

#endif