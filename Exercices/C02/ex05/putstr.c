#include<unistd.h>
#include<string.h>
void ft_putstr(char *str)
{
    int len;
    len = strlen(str);
    write(1, str, len);
}

int main()
{
    char s[] = "sssssss";
    ft_putstr(s);
    return 0;
}