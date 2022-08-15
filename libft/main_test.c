#include <stdio.h>
#include "libft.h"

void ft_printstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main (int argc, char **argv)
{
    char source[] = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    char source2[] = "ZYXWUTSRQPONMLKJIHGFEDCBA";
    int i;

    i = 0;
    if (argc >= 2)
    {
        while(i <= 24)
        {
            if (argv[1][i] == source[i])
            {  
                write(1, &source2[i], 1);
               write(1, "\n", 1);
               i++;
            }
            i++;
        }
        
    }
    else
        write(1, "\nnao\n\n", 5);
    
}