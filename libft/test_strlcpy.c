/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 19:31:36 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void ft_printstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main (void)
{
    char dst[] = "Costa";
    char src[] = "Alef";
    int tamanho;

    write(1, "\n", 1);
    ft_printstr("Esta função trabalha com String verdadeira, ou seja conta o caracter vazio no final da string");
    ft_printstr("\n\nSorce: ");
    ft_printstr(src);
    write(1, "\n", 1);
    ft_printstr("Resultado do Destino antes da função: ");
    ft_printstr(dst);
    write(1, "\n", 1);
    tamanho = ft_strlcpy(dst, src, 4) + '0';
    ft_printstr("Resultado do Destino depois da função incluindo o algoritimo vazio: ");
    ft_printstr(dst);
    write(1, "\n", 1);
    ft_printstr("Tamanho do Sorce incluindo algoritimo vazio: ");
    write(1, &tamanho, 1);
    write(1, "\n\n", 2);

}




