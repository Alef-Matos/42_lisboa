/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 23:13:59 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main (void)
{
    char dst[] = "Costa";
    char src[] = "Alef";
    int tamanho;
    int numero;

    numero = 4;
    printf("\nEsta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string\n\n");
    printf("Sorce: %s \nResultado do Destino antes da função: %s\n", src, dst);
    tamanho = strlcat(dst, src, numero);
    printf("Resultado do Destino depois da função incluindo o algoritimo vazio: %s\n", dst);
    printf("Tamanho do Sorce incluindo algoritimo vazio: %d\n\n", tamanho);
}