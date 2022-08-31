# Ft_strlen
```  
Foi usado aritmética de pointeiros como base para a recriação da função. Ela retorna um inteiro que é o 
comprimento do string (o número de caracteres do string, não contando o caractere NULL).
```
    
### Código da função:
```c
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}
```
### Código da função com explicação linha a linha:
```c
#include "libft.h" 
```
>Biblioteca onde se localiza todas as funções nescessárias para o exercício.
---
```c
size_t ft_strlen(const char *s) 
```
>Declaração da função.
---
```c
size_t i; 
```
>Declarar variável do tipo `size_t`(Valor sem sinal).
---
```c
l = 0; 
```
>Será atribuido o valor refênte a cada loop que o while fizer.
---
```c
while(*s++)
```
>Enquando o pointer `s` for fazio, avança uma posição na string `s` e executa o comando abaixo.
---
```c
l++;` 
```
>Acrescente +1 no valor da variável `l`.
---
```c
return (l);
```
>Apos o while for falso retorna o valor atual de `l` ou seja a quantidade de caracters dentro da string `s`.
---
## Demonstração:

<details>

<summary>Demonstração</summary>

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strlen/imagem_strlen.gif)

</details>