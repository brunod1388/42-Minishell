/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:03:44 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/30 18:23:50 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"

void	mnsh_init(t_mnsh *mnsh)
{
	mnsh->prompt = ft_strdup("$>");
	mnsh->input = NULL;
	ft_dlinit(&mnsh->cmds);
}
