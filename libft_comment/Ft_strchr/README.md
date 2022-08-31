    
# Ft_strchr    
    Foi usado aritmética de pointeiros como base para a recriação da função.
    
### Código da função:
```c
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
	{
		s++;
		if (c == *s)
			return ((char *)s);
	}
	return (0);
}
```
### Código da função com explicação linha a linha:
```c
char *ft_strchr(const char *s, int c) 
```
>Declaração da função.
---
```c
while (*s != '\0' && c != *s)
```
 >Enquando posição do ponteiro `s` não for `\0` (fim de string), e `c` for diferente que a poisição atual do ponteiro de `s`, será executado o codigo abaixo.
---
```c
s++;
```
>Avança uma posição no ponteiro de string `s`.
---
```c
if (c == *s)
```
>Se o ponteiro na posiçao atual for igual a `c`, executa o comando abaixo.
---
```c
return ((char *)s);
```
>Retorna a posição  atual do ponteiro de string `s`.
---
```c
return (0);
```
>Quando a condição  do `while` for falsa retorna null.
---
### Demonstração:

<details>

<summary>Demonstração</summary>

![image](https://github.com/Alef-Matos/42_lisboa/blob/master/libft_comment/Ft_strchr/imagem_strchr.gif)

</details>
