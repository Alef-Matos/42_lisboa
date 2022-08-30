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

int main(void)
{
    char s1[] = "ABCCCDDDEEEE";
    char set[] = "CDE";
    int tamanho;
    int numero;
	#include <string.h>
#include <stdio.h>
#include <stdlib.h>

}