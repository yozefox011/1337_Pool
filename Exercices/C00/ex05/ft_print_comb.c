#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int k;
    i = '0';
    while (i <= '7')
    {
        j = i + 1;
        while (j <= '8')
        {
            k = j + 1;
            while (k <= '9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                ft_putchar(',');
                ft_putchar(' ');
                k++;
            }
            j++;
        }
        i++;
    }   
}

int main()
{
    ft_print_comb();
    return 0 ;
}