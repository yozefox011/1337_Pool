#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
    int c;
    *a = *a / *b;
    c = *b;
    *b = c % *b;
    printf("a=%d\nb=%d",*a,*b);
}

int main(){
    int a = 30 , b = 5;
    ft_ultimate_div_mod(&a,&b);
}
