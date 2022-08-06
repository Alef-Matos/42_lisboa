# Ft_strrchr


```c


char *ft_strrchr(const char *s, int c)
{
    int size_str;
    const char *s_copy;
    
    s_copy = s;
    size_str = ft_strlen(s);
    s = (s_copy + size_str);
    while(*s != *s_copy && c != *s)
    {
        s--;
        if(*s == c)
           return ((char *)s);
    }
    return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
```
