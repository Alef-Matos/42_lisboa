# Ft_strrchr

    Foi usado aritmética de pointeiros como base para a recriação da função.
    
### Código da função:
```c 
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_copy;
	int			size_str;

	s_copy = s;
	size_str = ft_strlen(s);
	s = (s_copy + size_str);
	while (*s != *s_copy && c != *s)
	{
		s--;
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}
```
### Código da função com explicação linha a linha:
```c
#include "libft.h"
```
>Incluir biblioteca pessoal.  
---
```c
char *ft_strrchr(const char *s, int c) 
```
>Declaração da função.
---
```c
int size_str; 
```
>Declarar variável do tipo inteiro.
---
```c
const char *s_copy; 
```
>Declarar Pointer do tipo `const char`.
 ---
 ```c 
s_copy = s; 
```
>Pointer que terá a posiçao zero da string `s`.
---
```c
size_str = ft_strlen(s); 
```
>Variável que terá a quantidade de caracteres da string `s`.
---
```c
s = (s_copy + size_str); 
```
>Pointer `s` tera a posição do ultimo caracter da string `s`. 
---
```c
while(*s != *s_copy && c != *s) 
```
>Enquanto posiçao do pointer `s` for diferente que a posiçao de referência.
E `c` for diferente que o conteudo do pointer na posição atual, será executado
o comando abaixo.
---
```c
s--;
```
>Regressa uma posiçao no ponteiro de string `s`.
---
```c
if(*s == c) 
```
>Se o ponteiro na posiçao atual for igual a `c`, executa o codigo abaixo.
---
```c
return ((char *)s); 
```
>Retorna a posição atual do ponteiro de string `s`.
---
```c
return (0); 
```
>Quando a condição  do `while` for falsa retorna `null`.
---
### Demonstração:
<details>

<summary>Demonstração</summary>

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strrchr/imagem_strrchr.gif)

</details>