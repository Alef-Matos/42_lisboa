# Libft Comentado

Todas as funções da minha "Libft" com Readm's, Explicando o que a função faz e também o que cada linha de código faz.

### III.2 Parte 1 - Funções Libc

		Para começar, você deve refazer um conjunto de funções do arquivo libc. Suas funções terão os mesmos protótipos e 
	implementarão o mesmo comportamento dos originais. Eles devem cumprir a maneira como são definidos em seu homem. A única 
	diferença será os nomes deles. Eles começarão com o prefixo 'ft_'. Por exemplo, strlen se torna ft_strlen.
<div align="center">
<img src="https://user-images.githubusercontent.com/105389961/183259370-68f4f160-14c4-49f0-8bd9-41308f47e4c4.png" />
</div>

	Você deve escrever sua própria função implementando as seguintes funções originais. Eles não requerem nenhuma função externa:

### Funções da biblioteca `<ctype.h>`
- [ ] Função `ft_isalpha` - Teste de caracteres alfabéticos. 
- [ ] Função `ft_isdigit` - Teste de caractere de dígito decimal. 
- [ ] Função `ft_isalnum` - Teste de caracteres alfanuméricos. 
- [ ] Função `ft_isascii` - Teste para caracteres ASCII. 
- [ ] Função `ft_isprint` - Teste de caracteres de impressão (incluindo caracteres de espaço). 
- [ ] Função `ft_tolower` - Conversão de letras maiúsculas para minúsculas. 
- [ ] Função `ft_toupper` - Conversão de letras minúsculas para maiúsculas. 

### Funções da biblioteca `<stdlib.h>`
- [ ] Função `ft_atoi` - Converter string ASCII para inteiro. 

### Funções da biblioteca `<strings.h>`
- [ ] Função `ft_bzero` - Escreve zeros em uma string de bytes. 
- [ ] Função `ft_memset` - Escreve um byte em uma string de bytes. 
- [x] Função [`ft_memcpy`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_memcpy) - Copiar blocos de memória do source para o destino. 
- [x] Função [`ft_memccpy`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_memccpy) - Copia a string até que o caractere seja encontrado.
- [x] Função [`ft_memmove`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_memmove) - Copiar cadeia de bytes. 
- [x] Função [`ft_memchr`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_memchr) - Localizar um caracter num bloco de memória.
- [x] Função [`ft_memcmp`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_memcmp) - Comparar blocos de memória entre s1 e s2. 

### Funções da biblioteca `<string.h>`
- [x] Função [`ft_strlen`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strlen) - Retorna o tamanho de uma string. 
- [x] Função [`ft_strlcpy`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strlcpy) - Copiar strings. 
- [x] Função [`ft_strlcat`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strlcat) - Concatenação de strings limitadas por tamanho. 
- [x] Função [`ft_strnstr`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strnstr) - Localizar uma substring em uma string (limitada por tamanho).
- [x] Função [`ft_strchr`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strchr) - localizar caractere na string (primeira ocorrência).
- [x] Função [`ft_strrchr`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strrchr) - localizar caractere na string (última ocorrência).
- [x] Função [`ft_strncmp`](https://github.com/Alef-Matos/42_lisboa/tree/master/libft_comment/Ft_strncmp) - Compara strings limitadas por tamanho.

### Funções da biblioteca `<math.h>`
