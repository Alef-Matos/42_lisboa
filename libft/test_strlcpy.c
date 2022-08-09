/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:56:00 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 18:46:42 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t  strlcpy(char *dst, const char *src, size_t size);

int main (void)
{
    char dst[] = "Alef";
    char src[] = "Costa";
    int a;

    a = strlcpy(dst, src, 4);
    write(1, "\n", 1);
    write(1, &a, 1);
    write(1, "\n", 1);
}




