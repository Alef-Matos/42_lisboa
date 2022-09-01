# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 18:42:26 by almatos           #+#    #+#              #
#    Updated: 2022/09/01 13:40:01 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS	= -Wall -Wextra -Werror
CC = gcc
RM = @rm -f
INCLUDE = libft.h
REPOSITORY = @ar -rc
INDEX =	@ranlib

SOURCES	= ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c \
			ft_strnstr.c ft_strncmp.c ft_memcpy.c ft_memcmp.c
OBJECTS	= $(SOURCES:.c=.o)

BONUS_SOURCES = ft_strreverse_bonus.c ft_strstr_bonus.c ft_strcmp_bonus.c
BOUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

MESSAGE = @echo "Congratulations ✔︎"
MAIN_NAME = main_test.c
MAIN = @./test_exec
RM_MAIN = $(RM) test_exec
BIN = -o test_exec
NORMI = @norminette $(SOURCES) $(BONUS_SOURCES)

all:		$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(REPOSITORY) $(NAME) $(OBJECTS)
			$(INDEX) $(NAME)
			clear
			$(MESSAGE)

bonus:		$(NAME) $(BOUS_OBJECTS) 
			$(REPOSITORY) $(NAME) $(BOUS_OBJECTS) 
			$(INDEX) $(NAME)
			clear
			$(MESSAGE)
clean: 
			$(RM) $(OBJECTS) $(BOUS_OBJECTS)
			$(MESSAGE)

fclean:		clean
			$(RM) $(NAME) $(BOUS_OBJECTS)
			$(MESSAGE)

re:			fclean all
			$(MESSAGE)

run:		bonus
			$(CC) $(MAIN_NAME) $(NAME) $(CFLAGS) $(BIN) 
			$(RM) $(OBJECTS) $(BOUS_OBJECTS) 
			clear
			$(MAIN)
			$(RM_MAIN) $(NAME)

norm:
			$(NORMI)

help:		
			@echo "COMANDOS DISPONÍVEIS:"	
			@echo ""
			@echo "bonus: Inclui funções bonus a libft.a"
			@echo "clean: Limpar objetos"
			@echo "run: Compila a biblioteca inteira e executa o main_teste completo e limpa tudo "
			@echo "norm: Verifica a norminette de todas as funções."
			@echo "fclean: "
			@echo "re: "

.PHONY: all clean fclean re
