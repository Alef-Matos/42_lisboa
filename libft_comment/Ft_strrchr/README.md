# Ft_strrchr

`#include <unistd.h>` 

`#include "libft.h"` Incluir biblioteca pessoal.  


`char *ft_strrchr(const char *s, int c)` Declaração da função.

{

`int size_str;` Declarar inteiro.

`const char *s_copy;` Declarar Pointer do tipo const char.


    
`s_copy = s;` Pointer que terá a posiçao zero da string 's'.

`size_str = ft_strlen(s);` Variável que terá a quantidade de caracteres da string 's'.

`s = (s_copy + size_str);` Pointer 's' tera a posição do ultimo caracter da string 's'. 

`while(*s != *s_copy && c != *s)` Enquanto posiçao do pointer 's' for diferente que a posiçao de referência.
                                  e c for diferente que o conteudo do pointer na posição atual.

{

`s--;`Regressa uma posiçao no ponteiro de 's'.

`if(*s == c)` Se o ponteiro na posiçao atual for igual a 'c', executa o comando abaixo.

`return ((char *)s);`Retorna a posição  atual do ponteiro 's'.

}

`return (0);` Quando a condição  do `while` for falsa retorna null.

}

