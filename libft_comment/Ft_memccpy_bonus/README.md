# Ft_memccpy_bonus
```
A função memccpy() copia não mais que n bytes da área de memória src para a área de memória dest, 
parando quando o caractere c é encontrado.
A função memccpy() retorna um ponteiro para o próximo caractere em dest depois de c, ou NULO se c não 
foi encontrado nos n primeiros caracteres de src.
```
    
## Código da função:
```c
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;

	pointer_dest = (unsigned char *)dest;
	pointer_src = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	index = 0;
	while (n--)
	{
		*(pointer_dest + index) = *(pointer_src + index);
		if (*(pointer_src + index++) == (unsigned char)c)
			return (dest + index + 1);
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
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
``` 
>Declaração da função.
---
```c
size_t index; 
```
>Declarar variável do tipo `size_t` (Valor sem sinal).
---
```c
unsigned char	*pointer_dest;
```
>Declarar pointer `pointer_dest` do tipo `unsigned char`.
---
```c
unsigned char	*pointer_src;
```
>Declarar pointer `pointer_src` do tipo `unsigned char`.
---
```c
pointer_dst = (unsigned char*)dst;
```
>o `pointer_dst` recebe o `dst` com o `cast` `(unsigned char*)` para setar o seu tipo.
---
```c
pointer_src = (unsigned char*)src;
```
>o `pointer_src` recebe o `src` com o `cast` `(unsigned char*)` para setar o seu tipo.
---
```c
if (!dest && !src);
```
>Caso o resultado der null retornará `return (0);`.
---
```c
index = 0;
```
>Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.
---
```c
while (n--)
```
 >Enquando a variável `n` for diferente que `0`, executa o código abaixo.
---
```c
*(pointer_dest + index) = *(pointer_src + index);
```
>O ponteiro `dest` na posição do `index` receberá o ponteiro `src` na posição `index`.
---
```c
if (*(pointer_src + index++) == (unsigned char)c);
```
> se o ponteiro `src` na posição `index` for igual ao caracter na variável `c`, executa o comando abaixo, antes acrescenta +1 no `index`.
---
```c
return (dest + index + 1);
```
>Retorna o ponteiro `dest` na posição atual.
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
