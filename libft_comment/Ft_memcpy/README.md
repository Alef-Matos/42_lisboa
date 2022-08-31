# Ft_memcpy   
```
Foi usado aritmética de pointeiros como base para a recriação da função.
Finalidade é copiar blocos de memória. Ela recebe 3 parâmetros: destino, origem e número de bytes a serem copiados.
```
    
## Código da função:
```c
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t index;

	if (!dst && !src)
		return (0);
	index = 0;
	while (index < n)
	{
		*(unsigned char*)(dst + index++) = *(unsigned char*)(src++);
	}
	return (dst);
}
```
## Código da função com explicação linha a linha:

```c
#include "libft.h"
``` 
>Biblioteca onde se localiza todas as funções nescessárias para o exercício.
---
```c
void	*ft_memcpy(void *dst, const void *src, size_t n)
``` 
>Declaração da função (tipo void é tipo indefinido).
---
```c
size_t index; 
```
>Declarar variável do tipo 'size_t'(Valor sem sinal).
---
```c
if (!dst && !src)
```
>Se os ponteiro dst e src for null executa o comando abaixo.
---
```c
return (0);
```
>A função encerra.
---
```c
index = 0;
```
>Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.
---
```c
while (index < n)
```
 >Enquando o 'index' for menor que o liminte dado na variável 'n' executa o comando abaixo.
 ---
```c
*(unsigned char*)(dst + i++) = *(unsigned char*)(src++);
```
 >Iguala o valor de dois ponteiros na posição atual, '(unsigned char*)' => é um cast para definir o tipo do dado a ser trabalhado, nesse caso seria um cast de ponteiro do tipo char. `'*(unsigned char*)(dst + i++)'` => é a posição inicial do meu ponteiro 'dst' depois adiciona +1 no minha contagem(index). `'*(unsigned char*)(src++)'` é a poisão atual do meu ponteiro 'src' depois avança o endereço.

---
```c
return (dst); 
```
>Quando o While for falso a função termina e retorna o 'dst'.
---


### Demonstração:

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strchr/)
