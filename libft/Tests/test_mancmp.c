//FUNÇÃO FT_MENCMP.C
int main (void)
{
    char string_1[50];
    char string_2[50];
    int n;

    printf("################## COMPARAÇÃO ENTRE BLOCO DE MEMORIA ################\n");
    printf("Primeira string: ");
    fgets(string_1,50,stdin);
    printf("Segunda string: ");
    fgets(string_2,50,stdin);
    printf("Quantidade de bits: ");
    scanf("%d", &n);
    printf("\nFunção memcmp:\n");
    printf("Primeira string = %sSegunda string = %sRetorno: %d\n\n", string_1, string_2, memcmp(string_1, string_2, n));
    printf("Função ft_memcmp:\n");
    printf("Primeira string = %sSegunda string = %sRetorno: %d\n\n", string_1, string_2, ft_memcmp(string_1, string_2, n));  
}