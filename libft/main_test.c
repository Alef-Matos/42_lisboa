/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/08/31 17:21:11 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//FUNÇÃO FT_MANCPY.C
//COPIAR TESTES DAS FUNÇÕES ABAIXO
int main (void)
{
    char dest[] = "alef";
    char dest_secund[] = "alef";
    const char source[] = "Costa Matos";

    printf("Conteudo do destino antes da função: dest => %s, dest_second => %s \n\n", dest, dest_secund);
    memcpy(dest_secund, source, strlen(dest));
    ft_memcpy(dest, source, strlen(dest));
    printf("ft_memcpy -> Source: %s\nResultado do Destino depois da função: %s\n\n", source, dest);
    printf("memcpy -> Source: %s\nResultado do Destino depois da função: %s\n\n", source, dest_secund);
}