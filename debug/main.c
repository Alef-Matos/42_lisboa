#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *temp;
    int size;
    int i;

    i = 0;
    size = ft_strlen(s1);
    temp = malloc(ft_strlen(s1));
    if (!temp)
        return (NULL);
    while (*s1)
    {
        while(s1 =! set[size] && size != 0)
        {
           size--;
        }
        temp[i++] = s1;
        size = ft_strlen(s1);
    }
    temp[i] = '\0';
    return(temp);
}

int main (void)
{
    char s1[] = "ABCCCDDDEEEE";
    char set[] = "CDE";
    int tamanho;
    int numero;
	#include <string.h>
#include <stdio.h>
#include <stdlib.h>

}