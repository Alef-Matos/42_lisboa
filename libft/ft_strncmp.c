/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:21 by almatos           #+#    #+#             */
/*   Updated: 2022/08/17 14:23:53 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

//int ft_strncmp(const char *s1, const char *s2, size_t n)
//{

//}

int main(void)
{
    int n;
    int result_ft;
    int result_strncmp;
    char    *s1 = "abd";
    char    *s2 = "abc";

    n = 3;
    result_strncmp = strncmp(s1, s2, n);
//  result_ft = ft_strncmp(s1, s2, n);
    printf("\nString: %s\nFind: %s\n\n", s1, s2);
    printf("Result strncmp: %d, ", result_strncmp);
    if (result_strncmp == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
//  printf("Result ft_strncmp: %d", result_ft);
//  if (result_ft == 0)
//      printf("Strings iguais\n");
//  else
//      printf("Strings diferentes\n");
return 0;
}