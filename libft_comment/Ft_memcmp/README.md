# Ft_memcmp   
```
Finalidade é comparar blocos de memória. Ela recebe 3 parâmetros: string 1, string 2 e número de bytes a serem comparados.
```
    
## Código da função:
```c
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					index;
	unsigned char			*string_1;
	unsigned char			*string_2;

	string_1 = (unsigned char *)s1;
	string_2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (string_1[index] != string_2[index])
			return (string_1[index] - string_2[index]);
		index++;
	}
	return (0);
}
```
## Código da função com explicação linha a linha:

```c
#include "libft.h"
``` 
>Biblioteca onde se localiza todas as funções nescessárias para o exercício.
---
```c
int	ft_memcmp(const void *s1, const void *s2, size_t n)
``` 
>Declaração da função.
---
```c
size_t index; 
```
>Declarar variável do tipo 'size_t'(Valor sem sinal).
---
```c
unsigned char			*string_1;
```
>Declarar um pointer do tipo unsigned char.
---
```c
unsigned char			*string_2;
```
>Declarar um pointer do tipo unsigned char.
---
```c
string_1 = (unsigned char *)s1;
```
>O ponteiro `string_1` apontará para o ponteiro `s1` do tipo `(unsigned char *)`.
---
```c
string_2 = (unsigned char *)s2;
```
>O ponteiro `string_2` apontará para o ponteiro `s2` do tipo `(unsigned char *)`.
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
if (string_1[index] != string_2[index])
```
> Se o ponteiro `string_1` na posição atual for diferente que o ponteiro `string_2` na poição atual, executa o comando abaixo.
---
```c
return (string_1[index] - string_2[index]);
```
> Retorna o resultado da diferencia entre o pointer `string_1` na posição atual e o pointer `string_2` na posição atual. E termina a função.
---
```c
index++;
```
>Se o `if` acima for falso ira adicionar +1 na variável `index`.
---
```c
return (0);
```
>Se o `while` acima for falso a função terminá com retorno 0.
---

### Demonstração:

<details>
<summary>Demonstração</summary>
![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strchr/)
</details>
