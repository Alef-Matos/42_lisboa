/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:46:40 by almatos           #+#    #+#             */
/*   Updated: 2022/08/06 16:58:46 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <string.h>

int main (void)
{
   
    char test[] = "abacate";
    int n;
    int n2;

    n2 = strlen(test) + '0';
    n = ft_strlen(test) + '0';
    write(1, &n, 1);
    write(1, "\n", 1);
    write(1, &n2, 1);
    write(1, "\n", 1);
}