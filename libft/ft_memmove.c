/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:57:59 by almatos           #+#    #+#             */
/*   Updated: 2022/09/06 19:42:39 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*pointer_dst;
	unsigned char	*pointer_src;

	pointer_dst = (unsigned char*)dst;
	pointer_src = (unsigned char*)src;
	index = 0;
	if (pointer_src < pointer_dst)
		while (++index <= len)
			pointer_dst[len - index] = pointer_src[len - index];
	else
		while (len--)
			*(pointer_dst++) = *(pointer_src++);
	return (dst);
}
