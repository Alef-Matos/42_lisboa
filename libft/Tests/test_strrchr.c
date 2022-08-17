int main (void)
{
    char    test[] = "abac@te"; 
    char    *letra;
    char    *letra2;  
    int i;

    i = '@';
        letra = strrchr(test, i);
        letra2 = ft_strrchr(test, i);
        write(1, "\n", 1);
        write(1, "A palavra é abac@te", 20);
        write(1, " :\n\n", 4);
        write(1, "Função strchr: ", 17);
        write(1, letra, 1);
        write(1, "\n", 1);
        write(1, "Função ft_strchr: ", 20);
        write(1, letra2, 1);
        write(1, "\n\n", 2);
}