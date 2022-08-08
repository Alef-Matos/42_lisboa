# Ft_strlen  
    Foi usado operações com pointers como base para a recriação da função.
    
### Código da função:
```c
size_t ft_strlen(const char *s)
{
    size_t l;

    l = 0;
    while(*s++)
        i++;
    return (l);
}
```
### Código da função com explicação linha a linha:

`size_t ft_strlen(const char *s)` Declaração da função.

{

`size_t i;` Declarar variável do tipo 'size_t'(Valor sem sinal).


`l = 0;` Será atribuido o valor refênte a cada loop que o while fizer.

`while(*s++)` Enquando o pointer 's' for fazio, avança uma posição na string 's' e executa o comando abaixo.

`l++;` Acrescente +1 no valor da variável 'l'.

`return (l);` Apos o while for falso retorna o valor atual de 'l' ou seja a quantidade de caracters dentro da string 's'.

}

![image](https://user-images.githubusercontent.com/105389961/183395871-2be78d2d-3440-4194-8fbb-bf12238625ff.png)
