#include<string.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int len ;
    len = strlen(str);
    printf("%d", len);
    return len;
}

int main()
{
    char s[] = "sssssssssss";
    ft_strlen(s);
    return 0;
}