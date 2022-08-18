/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:55:16 by almatos           #+#    #+#             */
/*   Updated: 2022/08/18 12:18:00 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	size_dst;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	size_dst = ft_strlen(dst);
	index = 0;
	while (src[index] && size_dst + 1 < dstsize)
	{
		dst[size_dst] = src[index];
		index++;
		size_dst++;
	}
	dst[size_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}
