#include<stdio.h>
#include<string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i=0;
    while (i < n)
    {
        dest[i] = src[i];
        printf("%c",dest[i]);
        i++;
    }

    printf("\n");
    printf("%s", dest);
}

int main()
{
    char s1[] = "youssef";
    char s2[] = "aalouane";

    ft_strncpy(s2, s1, 4);
    return 0;
}