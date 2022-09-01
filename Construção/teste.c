//EXEMPLO MEMCHR() FUNÇÃO ORIGINAL

#include <stdio.h>
#include <string.h>
  
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  index;

    index = 0;
    while (index < n)
    {
        if (((unsigned char *)s)[index] == (unsigned char)c)
            return ((void *)(s + index));
        index++;
    }
    return (0);
}

int main(){
  int caractere = 'a';
  char * ponteiro;
  char fonte[] = "bbbba";

  // Como é retornando um ponteiro do tipo "void", uma conversão deve ser
  // feita para um ponteiro de "char"
  ponteiro = (char *)ft_memchr(fonte, caractere, 4);

  printf("Localizar a primeira letra '%c' nos 10 primeiros bytes do bloco de memória", caractere);
  if(ponteiro != NULL){
    printf("\nCaractere %c encontrado na posição %ld\n", caractere, ponteiro-fonte+1);
  } else {
    printf("\nCaractere %c não encontrado!\n", caractere);
  }

  return 0;
}