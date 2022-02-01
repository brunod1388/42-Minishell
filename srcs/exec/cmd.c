/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:27:57 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/31 00:16:52 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"

t_cmd *get_cmd(char *cmds, char *flags, char *args)
{
	t_cmd	*cmd;
	
	cmd = malloc(sizeof(t_cmd));
	if (!cmd)
		return (NULL);
	cmd->cmd = ft_strdup(cmds);
	cmd->flag = ft_strdup(flags);
	cmd->args = ft_strdup(args);
	return (cmd);
}

void	clear_cmd(t_cmd **cmd)
{
	free((*cmd)->input);
	free((*cmd)->cmd);
	free((*cmd)->flag);
	free((*cmd)->args);
	free(*cmd);
	*cmd = NULL;
}
