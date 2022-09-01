# Ft_memchr  
```
Finalidade é procurar a primeira ocorrência de uma caractere indicado num bloco de memória (string) e retornar um 
ponteiro do tipo void na posição encontrada.
```
    
## Código da função:
```c
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return ((void *)(s + index));
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
>Declarar variável do tipo `size_t` (Valor sem sinal).
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
if (((unsigned char *)s)[index] == (unsigned char)c)
```
> Se o ponteiro `s` do tipo `(unsigned char)` na posição atual do `index` for igual ao caracter da variavel `c` do tipo `(unsigned char)`, executa o comando abaixo. 
---
```c
return ((void *)(s + index));
```
> Retorna o ponteiro `s` do tipo `(void)` na posição atual do `index` e termina a função.
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
