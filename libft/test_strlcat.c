/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 23:50:38 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>


size_t ft_strlen(const char *s)
{
    size_t  l;

    l = 0;
    while(*s++)
        l++;
    return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

int main (void)
{
    char dst[] = "42";
    char src[] = "lisboa";
    int tamanho;
    int numero;

    numero = 9;
    printf("\nEsta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string\n\n");
    printf("Destino: %s \nSource: %s\n", dst, src);
    printf("Destino + Source + '\\0': %s %s\n", dst, src);
    tamanho = ft_strlcat(dst, src, numero);
    printf("Resultado do Destino depois da função incluindo o algoritimo vazio: %s\n", dst);
    printf("Tamanho do Sorce excluindo o ultimo caracter '\\0': %d\n\n", tamanho);
}