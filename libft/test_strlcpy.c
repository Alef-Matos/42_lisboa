/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 17:33:15 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
    char src[] = "Alef";
    char dst[] = "Costa";
    size_t size;

    size = 2;
    strlcpy(dst, src, size);
    printf("%s", dst);
}




