    
# Ft_strlcat  
```
A função strlcat trabalha com string verdadeira ou seja é considerado o final da string '\0'. 
Finalidade é a concatenação do conteúdo de uma variável a outra, ela recebe 3 parâmetros: destino,
origem e o tamanho a ser concatenado.
```

    
### Código da função:
```c
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	size_dst;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	size_dst = ft_strlen(dst);
	index = 0;
	while (src[index] && size_dst + 1 < dstsize)
	{
		dst[size_dst] = src[index];
		index++;
		size_dst++;
	}
	dst[size_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}
```
## Código da função com explicação linha a linha:
```c
#include "libft.h"
```
>Biblioteca onde se localiza todas as funções nescessárias para o exercício.
---
```c
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
```
>Declaração da função.
---
```c
size_t index;
``` 
>Declarar variável do tipo `size_t`(Valor sem sinal).
---
```c
size_t size_dst;
``` 
>Declarar variável do tipo 'size_t'(Valor sem sinal).
---
```c
if(dstsize <= ft_strlen(dst)) 
```
>Se o `dstzize`(valor nescesário para setar a quantidade de characteres que serão concatenados para o `dest`) for menor ou igual a quantidade de caracters no pointeiro de string `dst`, o codigo abaixo é executado.
---
```c
return (dstsize + ft_strlen(src));
```
>Retornarar a quantidade de caracteres do ponteiro de string `src` + o 'dstzize' e a função termina aqui.
---
```c
size_dst = ft_strlen(dst);
```
>Se o `if` acima for verdadeiro o código seguirá nessa linha, atribui a contagem da string `dst` dentro da variável `size_dst`.
---
```c
index = 0;
``` 
>Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.
---
```c
while(src[index] && size_dst + 1 < dstsize)
```
>Enquanto a string `src` na posição `index` for diferente que o fim da string e a variável `size_dst`(contem a quantos caracteres tem a string `dst`) +1 (+1 nescessário para abrir mais um espaço na string) for menor que o `dstsize`, será executado o comando abaixo.
---
```c
dst[size_dst] = src[index];
``` 
>String `dst` na posição do `size_dts`(final da string dst) receberá o valor da string `src` na posição do `index`. Fazendo assim até o `while` for falso.
---
```c
index++;
``` 
>Será adiconado +1 na contagem do `index`.
---
```c
size_dst++;
``` 
>Será adicionado +1 na contagem do `size_dst`.
---
```c
dst[size_dst] = '\0';
```
>Após o `while` for falso essa linha adicionara o caracter de fim de string no final da string `dst`.
---
```c
return (ft_strlen(dst) + ft_strlen(&src[index]));
```
>O program retorna o tamanho do `dst` + o tamano do `src` começando a partir da posição do `index`.
---
## Demonstração:

<details>

<summary>Demonstração</summary>

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strchr/)

</details>
