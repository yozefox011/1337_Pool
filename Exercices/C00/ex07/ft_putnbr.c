#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(long long int nb)
{
if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr( nb / 10);
        ft_putnbr( nb % 10);
    }
    else
    {
        ft_putchar(48 + nb);
    }
}

int main()
{
    ft_putnbr(-2147483648);
    return 0;
}