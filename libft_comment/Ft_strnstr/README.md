# Ft_strnstr 
```
    Função onde se procura o conteudo de uma string menor dentro de uma string maior e retorna tudo a partir do primeiro caracter encontrado. Essa fução tem um parâmetro a mais que seria o range da busca na string maior.
 ```
    
### Código da função:
```c
#include "libft.h"

char    *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t index;
    size_t found;

    index = 0;
    if (find[0] == '\0')
        return ((char *)str);
    while (str[index])
    {
        found = 0;
        while (str[index + found] == find[found] && (index + found) < len)
        {
            if (str[index + found] == '\0' && find[found] == '\0')
                return ((char *)&str[index]);
            found++;
        }
        if (find[found] == '\0')
            return ((char *)str + index);
        index++;
    }
    return (0);
}
```