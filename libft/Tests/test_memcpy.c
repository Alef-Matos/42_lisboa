//FUNÇÃO FT_MEMCPY.C
int main (void)
{
    char dest[] = "alef";
    char dest_secund[] = "alef";
    const char source[] = "Costa Matos";

    printf("Conteudo do destino antes da função: dest => %s, dest_second => %s \n\n", dest, dest_secund);
    memcpy(dest_secund, source, strlen(dest));
    ft_memcpy(dest, source, strlen(dest));
    printf("ft_memcpy -> Source: %s\nResultado do Destino depois da função: %s\n\n", source, dest);
    printf("memcpy -> Source: %s\nResultado do Destino depois da função: %s\n\n", source, dest_secund);
}