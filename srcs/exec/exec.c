/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:32:51 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/31 00:11:13 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"

static int is_builtin(t_cmd *cmd)
{
	if (!ft_strcmp(cmd->cmd, "echo"))
		return (1);
	// if (!ft_strcmp(cmd->cmd, "cd"))
	// 	return (1);
	// if (!ft_strcmp(cmd->cmd, "pwd"))
	// 	return (1);
	// if (!ft_strcmp(cmd->cmd, "export"))
	// 	return (1);
	// if (!ft_strcmp(cmd->cmd, "unset"))
	// 	return (1);
	// if (!ft_strcmp(cmd->cmd, "env"))
	// 	return (1);
	// if (!ft_strcmp(cmd->cmd, "exit"))
	// 	return (1);
	return (0);
}

static int exec_builtin(t_cmd *cmd)
{
	(void)	cmd;
	return (0);
}

static int is_extcmd(t_cmd *cmd)
{
	(void)	cmd;
	return (0);
}

static int exec_extcmd(t_cmd *cmd)
{
	(void)	cmd;
	return (0);
}

int		exec_cmd(t_cmd *cmd)
{
	(void) cmd;
	if (is_builtin(cmd))
		return (exec_builtin(cmd));
	else if (is_extcmd(cmd))
		return (exec_extcmd(cmd));
	return (1);
}
