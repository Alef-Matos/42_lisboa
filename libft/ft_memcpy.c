/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:15:32 by almatos           #+#    #+#             */
/*   Updated: 2022/08/31 18:35:20 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t index;

	if (!dst && !src)
		return (0);
	index = 0;
	while (index < n)
	{
		*(unsigned char*)(dst + index++) = *(unsigned char*)(src++);
	}
	return (dst);
}
