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

`size_t ft_strlen(const char *s)` Declaração da função.

{

`size_t i;` Declarar variável do tipo 'size_t'(Valor sem sinal).


`i = 0;` Será atribuido o valor referênte a cada loop que o while fizer.

`while(s[i])` Enquando o 's' na posição atual não for vazio, executa o comando abaixo.

`i++;` Acrescente +1 no valor da variável i.

`return (i);` Apos o while for falso retorna o valor atual de 'i' ou seja a quantidade de caracters dentro da string 's'.

}
