#include "libft.h"

char *ft_strreverse(char *str)
{
    int cont;
    int i;
    char    swap;
    
    cont = ft_strlen(str);
    i = 0;
    while(str[i] && i <= cont -1)
    {
        swap = str[i];
        str[i] = str[cont -1];
        str[cont -1] = swap;
        i++;
        cont--;
    }  
    return (str);
}
