#include <unistd.h>

void ft_print_comb(void)
{
    int c;
    int d;
    int u;

    c = 0;
    d = 1;
    u = 2;

    while (c < 8)
    {
        while (d < 9)
        {
            while (u < 10)
            {
                write (1, &c, 1);
                write (1, &d, 1);
                write (1, &u, 1);
                write (1, ",", 1);
                write (1, " ", 1);
                u++;
            }
            d++;
        }
        c++;
    }
}

int main (void)
{
    ft_print_comb();
    return (0);
}