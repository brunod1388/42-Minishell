/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:11:00 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/02/01 13:17:27 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"

int main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	t_mnsh	mnsh;
	char *s;
	for (int i = 0; i < 50; i++)
	{
		s = strerror(i);
		printf("%i : %s\n", i, s);
	}
	s = getenv("TERM");
	printf("ENV :\n%s\n", s);
	mnsh_init(&mnsh);
	while (42)
	{
		ft_putstr(mnsh.prompt);
		mnsh.input = get_next_line(1);
		ft_dladdlast(&mnsh.cmds, parse_input(mnsh.input));
		exec_cmd(mnsh.cmds.last->content);
	}
	while (42);
	return (0);
}