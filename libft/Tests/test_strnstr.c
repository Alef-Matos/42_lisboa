//TESTE DA FUNÇÃO FT_STRNSTR
int main(void)
{
    char    *s1 = "abcabdooo";
    char    *s2 = "abd";
    size_t  max = ft_strlen(s1);
    char    *i2 = ft_strnstr(s1, s2, max);
    printf("\nString: %s\nFind: %s\nSearch size: %d\nResult: %s\n", s1, s2, max, i2);
    return 0;
}