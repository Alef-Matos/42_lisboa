#include <stdio.h>
#include "libft.h"

int main (void)
{
    char source[] = "ABCDEFG";

    printf("\nSource: %s\n", source);
    ft_strreverse(source); 
    printf("Source inver: %s\n\n", source);
}