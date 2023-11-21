#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_combn(int n)
{
    int i = -1;

    while (++i < n)
    {
        while (++j < i)
        {
            ft_putchar(i);
            ft_putchar
        }
    }
}

int main (void)
{
    ft_print_combn(3);
}