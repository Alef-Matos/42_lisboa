/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:34:28 by almatos           #+#    #+#             */
/*   Updated: 2022/08/15 16:20:29 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*
** Part 1 - Libc functions
*/

size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
** Extra functions
*/

char *ft_strreverse(char *str);

#endif