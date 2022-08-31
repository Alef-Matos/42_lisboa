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
		((unsigned char *)dst)[i, i++] = ((unsigned char *)src)[i];
//		i++;
//        *(unsigned char*)(dst + i++) = *(unsigned char*)(src++);
	}
	return (dst);
}

//COPIAR TESTES DAS FUNÇÕES ABAIXO
int main (void)
{
    char dest[] = "alef";
    const char source[] = "Costa Matos";

    ft_memcpy(dest, source, strlen(dest));
    printf("ft_memcpy -> Source: %s\nResultado do Destino depois da função: %s\n\n", source, dest);
}