/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/09/06 19:53:05 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//COPIAR TESTES DAS FUNÇÕES ABAIXO
//FUNÇÃO FT_MEMMOVE.C
int main (void)
{
    char    fonte[50];
    char    destino[50];
    char    destino2[50];
    int     n; 
    int     comp;
    printf("\n######### COPIA BLOCO DE MEMORIA DO SORCE PARA O DESTINO #########\n\n");
    printf("==>Dados de entrada:\n");
//  RECOLHA DE DADOS
    printf("String Source: ");
    fgets(fonte,50,stdin);
    printf("String Destino: ");
    fgets(destino,50,stdin);
    printf("Número de bits: ");
    scanf("%d", &n);
//  ATRIBUIÇÃO DA FUNÇÃO
    memcpy(destino2, destino, 50);
//  FUNÇÃO MEMMOVE
    printf("\n==>FUNÇÃO MEMMOVE:");
    printf("\nString fonte antes do memmove = %s", fonte);
    printf("\nString destino antes do memmove = %s\n", destino);
    memmove(destino, fonte, n);
    printf("String destino depois do memmove = %s", destino);
    printf("\nNumero de bits: %d\n", n);
//  FUNÇÃO FT_MEMMOVE
    printf("\n==>FUNÇÃO FT_MEMMOVE:");
    printf("\nString fonte antes do memmove = %s", fonte);
    printf("\nString destino antes do memmove = %s", destino2);
    ft_memmove(destino2, fonte, n);
    printf("\nString destino depois do memmove = %s", destino2);
    printf("\nNumero de bits: %d\n", n);
//  TESTE DE MOULINETTE
        comp = strcmp(destino, destino2);
        if(comp == 0)
            printf("\n::::::::: Resultado igual - Moulinette Ok :::::::::\n");
        else
            printf(":::::::: Funções diferentes ::::::::::\n");
    return (0);
}