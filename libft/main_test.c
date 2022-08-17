/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/08/17 20:34:39 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//COPIAR TESTES DAS FUNÇÕES ABAIXO
//TESTE DA FUNÇÃO FT_STRSTR_BONUS
int main(void)
{
    char    *s1 = "abcabdooo";
    char    *s2 = "abd";
    char    *i2 = ft_strstr(s1, s2);
    printf("\nString: %s\nFind: %s\nResult: %s\n", s1, s2, i2);
    return 0;
}