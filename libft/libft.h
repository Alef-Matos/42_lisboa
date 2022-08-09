/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:34:28 by almatos           #+#    #+#             */
/*   Updated: 2022/08/09 18:44:04 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif