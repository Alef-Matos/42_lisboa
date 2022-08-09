/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:00:51 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 19:03:30 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t l;

    l = 0;
    while(*s++)
        l++;
    return (l);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;

    if (!dst || !src)
        return (0);
    srcsize = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize - 1))
       {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}

//size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
//{
//    size_t    x;
//
//    x = 0;
//    if (!dst || !src)
//        return (0);
//    if (dstsize)
//    {
//        while (src[x] && x < (dstsize -1))
//        {
//            dst[x] = src[x];
//            x++;
//        }
//        dst[x] = '\0';
//    }
//    return (ft_strlen((char *)src));
//}

int main ()
{
    char dst[] = "Costa";
    char src[] = "Alef";
    
    int a;
    a = ft_strlcpy(dst, src, 4) + '0';
    write(1, &a, 1); 
}