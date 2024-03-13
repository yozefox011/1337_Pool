#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    printf("Div is : %d\n", *div);
    printf("Mod is : %d\n", *mod);
}

int main()
{
    int div ;
    int mod ;
    int a = 10;
    int b = 2;
    ft_div_mod(a, b, &div, &mod);
    return 0;
}