/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:04:35 by almatos           #+#    #+#             */
/*   Updated: 2022/09/04 00:28:04 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//COPIAR TESTES DAS FUNÇÕES ABAIXO
//FUNÇÃO FT_pritoposto.C
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
