/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/08/17 14:04:37 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//TESTE DA FUNÇÃO FT_STRNCMP 
int main(void)
{
    int n;
    char    *s1 = "abc";
    char    *s2 = "abc";

    n = 3;
    char    *i2 = ft_strncmp(s1, s2,);
    printf("\nString: %s\nFind: %s\nResult: %d\n", s1, s2, n);
    return 0;
}