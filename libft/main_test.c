/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/08/30 22:11:20 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
//		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
//		i++;
        *(unsigned char*)(dst + i++) = *(unsigned char*)(src++);
	}
	return (dst);
}

//COPIAR TESTES DAS FUNÇÕES ABAIXO
int main (void)
{
    char dest[20];
    char dest2[20];
    const char source[] = "Alef Matos";
 
// printf("ft_memcpy -> Resultado do Destino antes da função: %s\n", dest);
//printf("memcpy -> Resultado do Destino antes da função: %s\n", dest2);

    ft_memcpy(dest, source, strlen(source)+1);
    memcpy(dest2, source, strlen(source)+1);
  
    printf("ft_memcpy -> Source: %s\nResultado do Destino depois da função4: %s\n\n", source, dest);
    printf("memcpy -> Source: %s\nResultado do Destino depois da função: %s\n", source, dest2);
}