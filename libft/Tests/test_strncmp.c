//TESTE DA FUNÇÃO FT_STRNCMP 
int main(void)
{
    int n;
    int result_ft;
    int result_strncmp;
    char    *s1 = "111";
    char    *s2 = "111";

    n = 3;
    result_strncmp = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("\nString: %s\nFind: %s\n\n", s1, s2);
    printf("Result strncmp: %d, ", result_strncmp);
    if (result_strncmp == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
    printf("Result ft_strncmp: %d, ", result_ft);
    if (result_ft == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
    return 0;
}