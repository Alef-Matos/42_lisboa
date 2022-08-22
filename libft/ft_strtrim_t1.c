/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:18:32 by almatos           #+#    #+#             */
/*   Updated: 2022/08/20 23:27:59 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		j;
	int		e;

	i = 0;
	j = 0;
	e = 0;
	temp = malloc(ft_strlen(s1));
	if (!temp)
		return (NULL);
	while (s1[e])
	{
		while (set[j])
		{
			if (s1[e] == set[j])
			e++;
			if (s1[e] != set[j])
			j++;
		}
		temp[i++] = s1[e++];
		j = 0;
	}
	return (temp);
}
