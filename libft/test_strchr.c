/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:42:17 by almatos           #+#    #+#             */
/*   Updated: 2022/08/06 17:09:37 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <string.h>

int main (void)
{
    char    test[] = "abac@te"; 
    char    *letra;
    char    *letra2;  
    int i;

    i = '@';
        letra = strchr(test, i);
        letra2 = ft_strchr(test, i);
        write(1, "\n", 1);
        write(1, "A palavra é abac@te", 20);
        write(1, " :\n\n", 4);
        write(1, "Função strchr: ", 17);
        write(1, letra, 1);
        write(1, "\n", 1);
        write(1, "Função ft_strchr: ", 20);
        write(1, letra2, 1);
        write(1, "\n\n", 2);
}