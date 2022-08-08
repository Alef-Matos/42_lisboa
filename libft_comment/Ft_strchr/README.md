    
# Ft_strchr    
    Foi usado operações com pointers como base para a recriação da função.
    
### Código da função:
```c
# Ft_strchr

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
    {
      s++;
      if (c == *s)
        return ((char *)s);
    }
    return (0);
}
```
