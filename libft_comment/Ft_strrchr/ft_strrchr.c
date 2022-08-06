/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:05:09 by almatos           #+#    #+#             */
/*   Updated: 2022/08/06 17:02:06 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int size_str;
    const char *s_copy;

    s_copy = s;
    size_str = ft_strlen(s);
    s = (s_copy + size_str);
    while(*s != *s_copy && c != *s)
    {
        s--;
        if(*s == c)
           return ((char *)s);
    }
    return (0);
}