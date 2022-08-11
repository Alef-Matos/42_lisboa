# Libft Makefile

### Código do Makefile:
```Makefile
NOME = libft.a
CFLAGS	= -Wall -Wextra -Werror
RM = @rm -f
INCLUDE	= libft.h
OBJETOS	= $(SOURCES:.c=.o)
ARQUIVO	= @ar -rc
RANLIB = @ranlib
MENSAGEM = @echo "Concluido ✔︎"
MAIN_NOME = teste.c
SOURCES	= ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c 
MAIN = main_teste

all:		$(NOME)

$(NOME):	$(OBJETOS) $(INCLUDE)
		$(ARQUIVO) $(NOME) $(OBJETOS)
		$(RANLIB) $(NOME)
		$(MENSAGEM)
clear: 
		$(RM) $(OBJETOS)
		$(MENSAGEM)

clear_main:		
		$(RM) $(MAIN)

clear_a:		
		$(RM) $(NOME)

ajuda:		
		@echo "COMANDOS DISPONÍVEIS:"	
		@echo ""
		@echo "clear: "
		@echo "clear_a: "
		@echo "clear_man: "
		@echo "run: "
		@echo "fclean: "
		@echo "re: "

run:
		gcc $(MAIN_NOME) $(NOME) $(CFLAGS) -o main
		./main_test

fclean:		clean
		$(RM) $(NOME)
		$(MENSAGEM)

re:		fclean all
		$(MENSAGEM)

.PHONY: 	all clean fclean re

```
