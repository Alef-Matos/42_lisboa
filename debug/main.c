#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	size_dst;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	size_dst = ft_strlen(dst);
	index = 0;
	while (src[index] && size_dst + 1 < dstsize)
	{
		dst[size_dst] = src[index];
		index++;
		size_dst++;
	}
	dst[size_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}

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