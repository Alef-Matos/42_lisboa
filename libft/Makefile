# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almatos <almatos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 18:42:26 by almatos           #+#    #+#              #
#    Updated: 2022/08/15 16:40:51 by almatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f
INCLUDE	= libft.h
ARQ_LIB	= @ar -rc
RAN_LIB = @ranlib

SOURCES	= ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c 
OBJECTS	= $(SOURCES:.c=.o)

BONUS_SOURCES = ft_striinverse.c
BOUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

MESSAGE = @echo "Concluido ✔︎"
MAIN = main_teste
MAIN_NAME = teste.c
BIN = -o main
CC = gcc

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(ARQ_LIB) $(NAME) $(OBJECTS)
			$(RAN_LIB) $(NAME)
			$(MESSAGE)

bonus:		$(NAME) $(BOUS_OBJECTS) 
			$(ARQ_LIB) $(NAME) $(BOUS_OBJECTS) 
			$(RAN_LIB) $(NAME)
			$(MESSAGE)
clear: 
			$(RM) $(OBJECTS) $(BOUS_OBJECTS)
			$(MESSAGE)

clear_main:		
			$(RM) $(MAIN)
			$(MESSAGE)

clear_a:		
			$(RM) $(NAME)  
			$(MESSAGE)

help:		
			@echo "COMANDOS DISPONÍVEIS:"	
			@echo ""
			@echo "clear: "
			@echo "clear_a: "
			@echo "clear_man: "
			@echo "run: "
			@echo "fclean: "
			@echo "re: "

run:
			$(CC) $(MAIN_NAME) $(NAME) $(CFLAGS) $(BIN) 
			./$(MAIN)

fclean:		clean
			$(RM) $(NAME)
			$(MESSAGE)

re:			fclean all
			$(MESSAGE)

.PHONY: all clean fclean re