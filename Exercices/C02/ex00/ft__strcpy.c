#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src)
{
    dest = src;
    printf("dest : %s, src : %s", dest, src);
}

int main()
{
    char s1[10] = "youssef";
    char s2[10] = "aalouane";
    ft_strcpy(s2, s1);
    return 0;
}