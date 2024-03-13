#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int *c;
    c = a;
    a = b;
    b = c;

    printf("a is %d\n", *a);
    printf("b is %d", *b);
}

int main()
{
    int a = 2;
    int b = 5;
    ft_swap(&a, &b);

    return 0;
}