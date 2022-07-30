/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatos <almatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:41:15 by almatos           #+#    #+#             */
/*   Updated: 2022/07/30 19:36:28 by almatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_printstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main (int argc, char **argv)
{
    if(argc >= 2)
    {
        int i;

        i = 1;
        while(i < argc)
        {
            ft_printstr(argv[i]);
            i < argc - 1 ? write(1, " ", 1) : write(1, ".\n", 2);
            i++;
        }
    }
}
