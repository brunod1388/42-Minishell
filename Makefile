# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoncalv <bgoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 19:39:23 by bgoncalv          #+#    #+#              #
#    Updated: 2022/02/01 13:35:00 by bgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= minishell

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

INCLUDES	= -I includes/ -I libft/includes/

LFLAGS		= -L./libft -lft -lreadline

SRCS		=	$(wildcard srcs/*.c) \
				$(wildcard srcs/exec/*.c) \
				$(wildcard srcs/env/*.c) \
				$(wildcard srcs/parsing/*.c)

OBJS		= $(SRCS:.c=.o)

RM			= rm -f

_BLUE		= \e[34m
_PURPLE		= \e[35m
_CYAN		= \e[36m
_END		= \e[0m

%.o: %.c
			@printf "minishell object : $(_BLUE)%-33.33s\r$(_END)" $@
			@${CC} ${CFLAGS} $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJS)
			@echo "\n"
			@$(MAKE) -C ./libft
			@gcc $(CFLAGS) $(INCLUDES) $(LFLAGS) $(OBJS) -o $(NAME)
			@printf "$(NAME)	[$(_BLUE)✓$(_END)]\n"

debug:		$(OBJS)
			@echo "\n"
			@$(MAKE) -C ./libft
			@gcc -g $(CFLAGS) $(INCLUDES) $(LFLAGS) $(OBJS) -o $(NAME)
			@printf "$(NAME)	[$(_BLUE)✓$(_END)]\n"

all:		$(NAME)

re:			clean $(NAME)

clean:
			@$(RM) $(OBJS)
			@printf "$(_PURPLE)Minishell Objs	deleted$(_END)\n"

fclean:		clean
			@$(MAKE) fclean -C ./libft
			@$(RM) $(NAME)

.PHONY:		all re clean fclean bin

