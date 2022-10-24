/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:18:43 by almatos           #+#    #+#             */
/*   Updated: 2022/09/07 14:38:44 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;

	pointer_dest = (unsigned char *)dest;
	pointer_src = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	index = 0;
	while (n--)
	{
		*(pointer_dest + index) = *(pointer_src + index);
		if (*(pointer_src + index++) == (unsigned char)c)
			return (dest + index + 1);
	}
	return (0);
}
