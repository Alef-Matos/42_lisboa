# Ft_strnstr 
```
Função onde se procura o conteudo de uma string menor dentro de uma string maior e retorna tudo a 
partir do primeiro caracter encontrado. Essa fução tem um parâmetro a mais que seria o range da busca na string maior.
```
    
### Código da função:
```c
#include "libft.h"

char    *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t index;
    size_t found;

    index = 0;
    if (find[0] == '\0')
        return ((char *)str);
    while (str[index])
    {
        found = 0;
        while (str[index + found] == find[found] && (index + found) < len)
        {
            if (str[index + found] == '\0' && find[found] == '\0')
                return ((char *)&str[index]);
            found++;
        }
        if (find[found] == '\0')
            return ((char *)str + index);
        index++;
    }
    return (0);
}
```
### Código da função com explicação linha a linha:

`#include "libft.h"` Biblioteca onde se localiza todas as funções nescessárias para o exercício.

`char    *ft_strnstr(const char *str, const char *find, size_t len)` Declaração da função.

{

`size_t index;` Declarar variável do tipo 'size_t'(Valor sem sinal).

`size_t found;` Declarar variável do tipo 'size_t'(Valor sem sinal).


`index = 0;` Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.

`if (find[0] == '\0')` Se a string find for vazia executa o código abaixo.

`return ((char *)str);` Retorno a posição incial do pointer 'str'. (Não a nenhuma procura).

`while (str[index])` Enquando a string 'str' na posição atual do index não for vazia, executo o comando abaixo.

{

`found = 0;` Variável por padrão 0, é o indicar caso a o while abaixo tenha encontrado algum caracter na string 'str'.

`while (str[index + found] == find[found] && (index + found) < len)` Enquando a string 'str' na posição atual(index) mais o contador 'faund' for igual a string 'find' na posição do contador 'faund' e a soma do 'index' com o 'found' for menor que o len. Será executado o 'if' abaixo.

{

`if (str[index + found] == '\0' && find[found] == '\0')`  Se ambas as condições for detectado que chegou no fim da string executa o comando abaixo.

`return ((char *)&str[index]);` Retorno o ponteiro de 'str' na posição atual do 'index'. Apos isso o programa termina.

`found++;` Adiciona +1 na contagen do 'found' caso o if acima for falso.

}

`if (find[found] == '\0')` Verifico se o 'find' na posição 'found' é vazio/termino da string. Se for verdadeiro executo o código abaixo.

`return ((char *)str + index);` Retorno a posição atual('index') do ponteiro 'str'. Apos isso o programa termina.

`index++;` Adiciona +1 na contagen do 'index' caso o if acima for falso.

}

`return (0);` Quando toda a str for percorrida o programa termina.

}
### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment//.gif)