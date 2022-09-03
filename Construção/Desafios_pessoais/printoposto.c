
/*
NÃO CONSEGUI FAZER ESSE EXERCICIO NO EXAME DA PISCINA DA 42 LISBOA.
SERIA RECEBER ARGUMENTOS DO ALFABETO E RETORNAR COM O OPOSTO DE CADA LETRAL.
EX: A É O OPOSTO DE Z, C É O OPOSTO DE X E ETC... ABC FICARIA ZYX.
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c) 
{
	write(1, &c, 1);
}

void pritoposto(char *str)
{
    int index;
    int posi;
    char    alfa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char    alfa_inverso[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    
    index = 0;
    while(str[index])
    {
        posi = 0;
        if (str[index] >='A' && str[index] <= 'Z')
        {
            while(posi <= 25 && str[index] != alfa[posi])
                posi++;
            ft_putchar(alfa_inverso[posi]);
        }
        else if(str[index] >='a' && str[index] <= 'z')
        {
            while(posi <= 25 && str[index] != alfa[posi] + 32)
                posi++;
            ft_putchar(alfa_inverso[posi]+32);
        }
        else
            write(1, &str[index], 1); 
        index++;
    }
}

int main (int argc, char **argv)
{
    int index;
    
    index = 1;
    if (argc >= 2)
      {
           while(argc > index)
            {
                pritoposto(argv[index]);
                if (argc > index +1)
                    write(1, " ", 1);
                if (argc == index +1)
                    write(1, "\n", 1);
                index++;                
            }         
        }
    else
        write(1, "Falta argumentos\n", 18); 
}