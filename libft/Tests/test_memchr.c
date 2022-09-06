//FUNÇÃO FT_MEMCHR.C
int main (void)
{
    char    fonte[50];
    char     l;
    char    *ponteiro_1;
    char    *ponteiro_2;
    int     n;
    int     letra;

    printf("\n######### BUSCA DE UM CARACTER NUM BLOCO DE MEMORIA E RETORNA UM PONTEIRO NA POSIÇÃO ENCONTRADA #########\n\n");
    printf("String fonte: ");
    fgets(fonte,50,stdin);
    printf("Letra para busca: ");
    scanf("%c", &l);
    printf("Número de bits: ");
    scanf("%d", &n);

    letra = l;
    ponteiro_1 = (char *)ft_memchr(fonte, letra, n);
    ponteiro_2 = (char *)memchr(fonte, letra, n);
    printf("\n==>Função memchr:\n");
    printf("String fonte = %sLetra para busca = %c\nNumero de bits: %d", fonte, letra, n);
    if(ponteiro_2)
        {
            printf("\nLetra %c, encontrado na posição %ld\n", letra, ponteiro_2 - fonte + 1);
            printf("Estring a partir da letra encontrada: %s\n", ponteiro_2);
        }
    else
        printf("\nLetra %c, não encontrado!\n", letra);
    printf("\n==>Função ft_memcmp:\n");
    printf("String fonte = %sLetra para busca = %c\nNumero de bits: %d", fonte, letra, n);
    if(ponteiro_1)
        {
            printf("\nLetra %c, encontrado na posição %ld\n", letra, ponteiro_1 - fonte + 1);
            printf("Estring a partir da letra encontrada: %s\n", ponteiro_1);
        }
    else
        printf("\nletra %c, não encontrado!\n\n", letra);

    if(ponteiro_1 == ponteiro_2)
        printf("::::::::: Moulinette Ok :::::::::\n");
    else
        printf(":::::::: Funções diferentes ::::::::::\n");
    return (0);
}