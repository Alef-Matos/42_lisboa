int main (void)
{
    char dst[5];
    char src[] = "Alef";
    int tamanho;
    int numero;

    numero = 4;
    printf("\nEsta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string\n\n");
    tamanho = ft_strlcpy(dst, src, numero);
    printf("Resultado do Destino depois da função incluindo o algoritimo vazio: %s\n", dst);
    printf("Retorno:Tamanho do  Destino + Source excluindo o ultimo caracter '\\0': %d\n\n", tamanho);
}