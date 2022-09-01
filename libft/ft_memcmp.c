/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:24:50 by almatos           #+#    #+#             */
/*   Updated: 2022/09/01 13:06:14 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					index;
	unsigned char			*string_1;
	unsigned char			*string_2;

	string_1 = (unsigned char *)s1;
	string_2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (string_1[index] != string_2[index])
			return (string_1[index] - string_2[index]);
		index++;
	}
	return (0);
}
