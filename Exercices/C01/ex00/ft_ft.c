#include<stdio.h>

void ft_ft(int *nbr)
{
    printf("n is ");
    printf("%d", *nbr);
}

int main()
{
    int n = 42;
    ft_ft(&n);
    return 0;
}