/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:53:35 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 22:08:26 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  size_src;
    size_t  counter;

    if (!dst || !src)
        return (0);
    size_src = ft_strlen(src);
    counter = 0;
    if (dstsize)
    {
        while(*src &&  counter< (dstsize - 1))
        {
            dst[0] = src[0];
            dst++;
            src++;
            counter++;
        }
        dst[0] = '\0';
        
    }
    return (size_src);
}