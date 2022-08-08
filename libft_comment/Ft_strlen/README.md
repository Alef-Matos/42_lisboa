# Ft_strlen  
    Foi usado operações com pointers como base para a recriação da função.
    
### Código da função:
```c
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
        return (i);
}
```
### Código da função com explicação linha a linha:

`size_t ft_strlen(const char *s)`

{

`size_t i;`


`i = 0;`

`while(s[i])`

`i++;`

`return (i);`

}