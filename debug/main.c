#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

int main (void)
{
   
    char test[] = "abacate";
    int n;
    int n2;

    n2 = strlen(test) + '0';
    n = ft_strlen(test) + '0';
    write(1, &n, 1);
    write(1, "\n", 1);
    write(1, &n2, 1);
    write(1, "\n", 1);
}