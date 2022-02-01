/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_shell_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:11:01 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/01/30 18:04:45 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "micro_shell.h"

void	test_readline(void)
{
	char	*s = "a";
	int		i;
	
	while (s[0] != 'q' || s[1] != 'q')
	{
		printf("\nnew loop\n");
		s = readline("test> ");
		printf( "input : \"%s\"\n", s);
		i = add_history(s);
		printf("add_history : %i\n", i);
		rl_redisplay();
	}
}

void test_sys(void)
{
	char s[128];
	char *s2;

	s2 = getcwd(s , 128);
	printf("current working direct. : %s\n", s);
	printf("s2 : %s\n", s2);
	printf("s  add : %p\n", s);
	printf("s2 add : %p\n", s2);
}
