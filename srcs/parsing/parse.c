/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:05:48 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/31 00:16:44 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"


t_cmd	*parse_input(char *s)
{
	t_cmd	*cmd;
	char	**split;

	split = ft_split(s, ' ');
	cmd = get_cmd(split[0], split[1], split[2]);
	if (!cmd || !split)
		return (NULL);
	ft_clearsplit(split);
	return (cmd);
}
