#include<stdio.h>
#include<string.h>
void ft_rev_int_tab(int *tab, int size)
{
    int i = 0; 
    while(i < size)
    {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
        i++;
    }

    for (i = size; i >= 0; i--)
    {
        printf("%d", tab[i]);
    }
    
    
}

int main()
{
    int *s;
    int size = 6;
    ft_rev_int_tab(s, size);

    return 0;
}