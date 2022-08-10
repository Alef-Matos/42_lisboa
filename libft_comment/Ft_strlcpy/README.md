    
# Ft_strlcpy    
    A função strlcpy trabalha com string verdadeira ou seja é considerado o final da string '\0'. 
    
### Código da função:
```c
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  size_src;
    size_t  index;

    if (!dst || !src)
        return (0);
    size_src = ft_strlen(src);
    index = 0;
    if (dstsize != 0)
    {
        while(src[index] != '\0' &&  index < (dstsize - 1))
        {
            dst[index] = src[index];
            index++;
        }
        dst[index] = '\0';
    }
    return (size_src);
}
```
### Código da função com explicação linha a linha:
`#include "libft.h"` Biblioteca onde se localiza todas as funções nescessárias para o exercício.

`size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)` Declaração da função.

{

`size_t  size_src;` Declarar variável do tipo 'size_t'(Valor sem sinal).

`size_t  index;` Declarar variável do tipo 'size_t'(Valor sem sinal).


`size_src = ft_strlen(src);` Será atribuido o retorno da função de contagem da string 'src'.

`if (!dst || !src)` Se tiver falha na lógica executa o código abaixo.

`return (0);` Para o programa.

`index = 0;` Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.

`if (dstsize != 0)` Se o 'dstzize'(valor nescesário para setar a quantidade de characteres que serão copiados para o 'dest') for diferente que 0, o codigo abaixo é executado. 

{

`while(src[index] != '\0' &&  index < (dstsize - 1))` Enquanto a string 'src' na posição 'index' for diferente que o fim da string e a variável 'index' for menor que o 'dstsize' -1 (-1 nescessário pois a string começa com 0 e não 1), será executado o comando abaixo.

{

`dst[index] = src[index];` String 'dst' na posição do index receberá o valor da string 'src' na mesma posição. Fazendo assim até o 'while' for falso.

`index++;` Será adiconado +1 na contagem do index.

}

`dst[index] = '\0';` Após o 'while' for falso essa linha adicionara o caracter de fim de string na string 'dst'.

}

`return (size_src);` O program retorna o tamanho do 'src' que está dentro da variável 'size_src'.

}
### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strlcpy/imagem_strlcpy.gif)

### Código da função (Outra maneira de se fazer uasando operações com pointeiros ):
```c
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  size_src;
    size_t  counter;

    if (!dst || !src)
        return (0);
    size_src = ft_strlen(src);
    counter = 0;
    if (dstsize)
    {
        while(*src &&  counter< (dstsize - 1))
        {
            dst[0] = src[0];
            dst++;
            src++;
            counter++;
        }
        dst[0] = '\0';
        
    }
    return (size_src);
}
```