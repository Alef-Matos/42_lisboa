/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:39:12 by almatos           #+#    #+#             */
/*   Updated: 2022/08/17 19:39:14 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreverse(char *str)
{
	char		swap;
	int			cont;
	int			i;

	cont = ft_strlen(str);
	i = 0;
	while (str[i] && i <= cont -1)
	{
		swap = str[i];
		str[i] = str[cont -1];
		str[cont -1] = swap;
		i++;
		cont--;
	}
	return (str);
}
