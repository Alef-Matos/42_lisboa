# Ft_strlen  
    Foi usado aritmética de pointeiros como base para a recriação da função.
    
### Código da função:
```c
size_t ft_strlen(const char *s)
{
    size_t l;

    l = 0;
    while(*s++)
        i++;
    return (l);
}
```
### Código da função com explicação linha a linha:
`#include "libft.h"` Biblioteca onde se localiza todas as funções nescessárias para o exercício.

`size_t ft_strlen(const char *s)` Declaração da função.

{

`size_t i;` Declarar variável do tipo 'size_t'(Valor sem sinal).


`l = 0;` Será atribuido o valor refênte a cada loop que o while fizer.

`while(*s++)` Enquando o pointer 's' for fazio, avança uma posição na string 's' e executa o comando abaixo.

`l++;` Acrescente +1 no valor da variável 'l'.

`return (l);` Apos o while for falso retorna o valor atual de 'l' ou seja a quantidade de caracters dentro da string 's'.

}

### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strlen/imagem_strlen.gif)
