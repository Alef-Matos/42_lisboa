//TESTE DA FUNÇÃO FT_STRCMP_BONUS
int main(void)
{
    int result_ft;
    int result_strncmp;
    char    *s1 = "111";
    char    *s2 = "111";

    result_strncmp = strcmp(s1, s2);
    result_ft = ft_strcmp(s1, s2);
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