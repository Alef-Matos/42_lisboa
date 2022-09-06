//FUNÇÃO FT_MEMMOVE.C
int main (void)
{
    char    fonte[50];
    char    destino[50];
    char    destino2[50];
    char    *fu_memcpy;
    char    *fu_ft_memcpy;
    int     n; 
    printf("\n######### COPIA BLOCO DE MEMORIA DO SORCE PARA O DESTINO #########\n\n");
// RECOLHA DE DADOS
    printf("String Source: ");
    fgets(fonte,50,stdin);
    printf("String Destino: ");
    fgets(destino,50,stdin);
    printf("Número de bits: ");
    scanf("%d", &n);
//  ATRIBUIÇÃO DA FUNÇÃO
    fu_memcpy = (char *)memcpy(destino2, destino, 50);
    fu_ft_memcpy = (char *)memcpy(destino2, destino, 50);
//  FUNÇÃO MEMMOVE
    printf("\n==>Função memmove:\n");
    printf("String fonte antes do memmove = %s", fonte);
    printf("String destino antes do memmove = %s\n", destino);
    (char *)memmove(destino, fonte, n);
    printf("String destino depois do memmove = %s", destino);
    printf("Numero de bits: %d\n", n);
//  FUNÇÃO FT_MEMMOVE
    printf("\n==>Função ft_memmove:\n");
    printf("String fonte antes do memmove = %s", fonte);
    printf("String destino antes do memmove = %s\n", destino2);
    printf("String destino depois do memmove = %s", destino2);
    printf("Numero de bits: %d\n", n);
//  TESTE DE MOULINETTE
        if(fu_memcpy == fu_ft_memcpy)
            printf("::::::::: Moulinette Ok :::::::::\n");
        else
            printf(":::::::: Funções diferentes ::::::::::\n");
    return (0);
}