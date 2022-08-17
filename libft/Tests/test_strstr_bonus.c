//TESTE DA FUNÇÃO FT_STRSTR_BONUS
int main(void)
{
    char    *s1 = "abcabdooo";
    char    *s2 = "abd";
    char    *i2 = ft_strstr(s1, s2);
    printf("\nString: %s\nFind: %s\nResult: %s\n", s1, s2, i2);
    return 0;
}