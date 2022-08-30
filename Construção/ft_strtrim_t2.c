/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_t2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:18:32 by almatos           #+#    #+#             */
/*   Updated: 2022/08/22 11:13:25 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		size;
	int		i;

	i = 0;
	temp = malloc(ft_strlen(s1));
	if (!temp)
		return (NULL);
	while (*s1)
	{
		size = ft_strlen(set);
		while (*s1 != set[size] && size != 0)
		{
			size--;
			if (*s1 == set[size])
			{
				s1++;
				size = ft_strlen(set);
			}
			temp[i++] = *s1;
			s1++;
		}
		return (temp);
	}
}
