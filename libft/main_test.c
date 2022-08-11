#include <stdio.h>
#include "libft.h"

int main (void)
{
    char dst[] = "AB";
    char src[] = "CDE";
    int tamanho;
    int numero;

    numero = 6; //Considerar o caracter de final de string '/0'
    printf("\nEsta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string\n\n");
    printf("Destino: %s \nSource: %s\n", dst, src);
    printf("Destino + Source + '\\0': %s%s\n", dst, src);
    tamanho = ft_strlcat(dst, src, numero);
    printf("Resultado do Destino depois da função incluindo o algoritimo vazio: %s\n", dst);
    printf("Retorno:Tamanho do  Destino + Source excluindo o ultimo caracter '\\0': %d\n\n", tamanho);
}