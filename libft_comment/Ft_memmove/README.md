# Ft_memmove   
```
Foi usado aritmética de pointeiros como base para a recriação da função.
Finalidade é copiar blocos de memória. Ela recebe 3 parâmetros: destino, 
origem e número de bytes a serem copiados. Diferênica entre a `memcpy` e 
`memmove` é que a `memcpy` simplesmente copia os dados um por um de um local 
para outro. Por outro lado, memmove() copia os dados primeiro para um buffer 
intermediário, depois do buffer para o destino. memcpy() leva a problemas 
quando strings se sobrepõem.
```
    
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*pointer_dst;
	unsigned char	*pointer_src;

	pointer_dst = (unsigned char*)dst;
	pointer_src = (unsigned char*)src;
	index = 0;
	if (pointer_src < pointer_dst)
		while (++index <= len)
			pointer_dst[len - index] = pointer_src[len - index];
	else
		while (len--)
			*(pointer_dst++) = *(pointer_src++);
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
void	*ft_memmove(void *dst, const void *src, size_t len)
``` 
>Declaração da função (tipo void é tipo indefinido).
---
```c
size_t index; 
```
>Declarar variável do tipo 'size_t'(Valor sem sinal).
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
index = 0;
```
>Variável ultilizada para referenciar a posição dentro de uma string e registrar a quantidade de loops feitos pelo while.
---
```c
if (pointer_src < pointer_dst);
```
>se o ponteiro `pointer_src` for menor do que o ponteiro `pointer_dst` executa o comando abaixo.
---
```c
while (++index <= len)
```
 >Enquando o 'index' na posição inicial 1(++ antes já atribui 1 na contagem) for menor ou igual a variável `len` adicionará +1 no `index` e executa o comando abaixo.
---
```c
pointer_dst[len - index] = pointer_src[len - index];
```
 >O ponteiro `pointer_dst` na posição da variável `len` menos a contagem atual `index` recebe o pointeiro na posição `pointer_src` na poisição da variável `len` menos a contagem atual `index`. Isso fará que começa a substituição de traz para frente.
---
```c
else
```
 >Se o `if` anterior for falso será executado o comando a seguir.
---
```c
while (len--)
```
 >Enquanto a variável `len` for diferente que 0 será executado o comando abaixo e irá subtrair -1 na mesma variável.
---
```c
*(pointer_dst++) = *(pointer_src++);
```
 >Se o ponteiro `pointer_dst` na posição atual recebe o ponteiro `pointer_src` na mesma posição e depois avança a posição e isso repetirá até que o `while` seja falso.
---
```c
return (dst); 
```
>Quando o While for falso a função termina e retorna o 'dst'.
---


### Demonstração:

<details>
<summary>Demonstração</summary>
![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strchr/)
</details>

