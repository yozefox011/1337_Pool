#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 100)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(48 + a / 10);
            ft_putchar(48 + a % 10);
            ft_putchar(' ');
            ft_putchar(48 + b / 10);
            ft_putchar(48 + b % 10);
            ft_putchar(',');
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}