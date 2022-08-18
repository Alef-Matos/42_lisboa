# Ft_strncmp
```
Foi usado aritmética de pointeiros como base para a recriação da função. A função compara duas strings tendo como 
diferêncial da 'strcmp' a limitação de tamanho.
```
    
### Código da função:
```c
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n != 0 && *s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
```
### Código da função com explicação linha a linha:

`#include "libft.h"` Biblioteca onde se localiza todas as funções nescessárias para o exercício.

`int	ft_strncmp(const char *s1, const char *s2, size_t n)` Declaração da função.

{

`while ((n != 0 && *s1 != '\0') && (*s1 == *s2))` Enquanto variável 'n'(limitação de tamanho) for diferente que 0 e a posição atual do pointeiro de string 's1' não for vazia('\0') e o ponteiro da string 's1' na posição atual for igual ao ponteiro de string 's2' na posição atual, executa o comando abaixo.

{

`s1++;` Anda 1 casa para frente do ponteiro de string 's1'.

`s2++;` Anda 1 casa para frente do ponteiro de string 's2'.

`n--;` diminui -1 da váriavel 'n' por cada loop dado no while até quando o n for '= 0' ou '*s1 == *s2' for falso.

}

`if (n == 0)` Apos o while der falso, vai ser verificado se a variável 'n' for 0, se for vai executar o comando abaixo.

`return (0);` Retorna 0 dizendo que as strings são iguais, só em dois casos ou até o fim da string limitada atravez da variavel 'n' der tudo igual ou se a variavel 'n' for 0 pois 0 e 0 é igual srsr e terminará o programa.

`return ((unsigned char)*s1 - (unsigned char)*s2);` Caso o While for falso e o 'if' acima for falso, retornar o resultado da diferência entre as strings na posição atual e terminará o programa.
}
### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/)
