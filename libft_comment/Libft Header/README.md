# Libft header

### Código do header:
#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/* ************************************************************************** */
/*                          Part 1 - Libc functions                           */
/* ************************************************************************** */

size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *str, const char *find, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

/* ************************************************************************** */
/*                              Extra functions                               */
/* ************************************************************************** */

char    *ft_strreverse(char *str);
char    *ft_strstr(const char *str, const char *find);
int     ft_strcmp(const char *s1, const char *s2);

#endif
```