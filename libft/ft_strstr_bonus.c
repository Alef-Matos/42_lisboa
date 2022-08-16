#include "libft.h"

char    *ft_strstr(const char *str, const char *find)
{
    size_t index;
    size_t found;

    index = 0;
    if (find[0] == '\0')
        return ((char *)str);
    while (str[index])
    {
        found = 0;
        while (str[index + found] && str[index + found] == find[found])
        {
            if (find[found + 1] == '\0')
                return ((char *)&str[index]);
            found++;
        }
        index++;
    }
    return (NULL);
}