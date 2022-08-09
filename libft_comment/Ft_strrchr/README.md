# Ft_strrchr

    Foi usado operações com pointers como base para a recriação da função.
    
### Código da função:
```c 
#include <unistd.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int size_str;
    const char *s_copy;

    s_copy = s;
    size_str = ft_strlen(s);
    s = (s_copy + size_str);
    while(*s != *s_copy && c != *s)
    {
        s--;
        if(*s == c)
           return ((char *)s);
    }
    return (0);
}
```
### Código da função com explicação linha a linha:
`#include <unistd.h>` 

`#include "libft.h"` Incluir biblioteca pessoal.  


`char *ft_strrchr(const char *s, int c)` Declaração da função.

{

`int size_str;` Declarar variável do tipo inteiro.

`const char *s_copy;` Declarar Pointer do tipo const char.


    
`s_copy = s;` Pointer que terá a posiçao zero da string 's'.

`size_str = ft_strlen(s);` Variável que terá a quantidade de caracteres da string 's'.

`s = (s_copy + size_str);` Pointer 's' tera a posição do ultimo caracter da string 's'. 

`while(*s != *s_copy && c != *s)` Enquanto posiçao do pointer 's' for diferente que a posiçao de referência.
                                  E 'c' for diferente que o conteudo do pointer na posição atual, será executado
                                  o comando abaixo.

{

`s--;`Regressa uma posiçao no ponteiro de string 's'.

`if(*s == c)` Se o ponteiro na posiçao atual for igual a 'c', executa o codigo abaixo.

`return ((char *)s);` Retorna a posição atual do ponteiro de string 's'.

}

`return (0);` Quando a condição  do `while` for falsa retorna null.

}
### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strrchr/imagem_strrchrc.gif)


