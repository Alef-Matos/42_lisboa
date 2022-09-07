//FUNÇÃO FT_MEMCCPY.C
int main (void)
{
    char    fonte[50];
    char    destino[50];
    char    destino2[50];
    char    l;
    int     letra;
    int     n; 
    int     comp;
    printf("\n######### COPIA BLOCO DE MEMORIA DO SORCE PARA O DESTINO PARANDO NO CARACTER INDICADO #########\n\n");
    printf("==>Dados de entrada:\n");
//  RECOLHA DE DADOS
    printf("String Source: ");
    fgets(fonte,50,stdin);
    printf("String Destino: ");
    fgets(destino,50,stdin);
    printf("Letra alvo: ");
    scanf("%c", &l);
    printf("Número de bits: ");
    scanf("%d", &n);

    letra = l;
//  CLONAR DESTINOS
    memcpy(destino2, destino, 50);
//  FUNÇÃO MEMCCPY
    printf("\n==>FUNÇÃO MEMCCPY:");
    printf("\nString fonte antes do memccpy = %s", fonte);
    printf("String destino antes do memccpy = %s", destino);
    printf("Letra alvo: %c\n", l);
    memccpy(destino, fonte, letra, n);
    printf("String destino depois do memccpy = %s", destino);
    printf("\nNumero de bits: %d\n", n);
//  FUNÇÃO FT_MEMCCPY
    printf("\n==>FUNÇÃO FT_MEMCCPY:");
    printf("\nString fonte antes do ft_memccpy = %s", fonte);
    printf("String destino antes do ft_memccpy = %s", destino2);
    printf("Letra alvo: %c", l);
    ft_memccpy(destino2, fonte, letra, n);
    printf("\nString destino depois do ft_memccpy = %s", destino2);
    printf("\nNumero de bits: %d\n", n);
//  TESTE DE MOULINETTE
        comp = strcmp(destino, destino2);
        if(comp == 0)
            printf("\n::::::::: Resultado igual - Moulinette Ok :::::::::\n");
        else
            printf(":::::::: Funções diferentes ::::::::::\n");
    return (0);
}