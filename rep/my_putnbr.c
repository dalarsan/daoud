#include <unistd.h>
#include "my.h"

int my_putnbr(int nb)
{
    unsigned int a;

    if (nb < 0) {
        void my_putchar(char c);
        a = -nb;
        my_putchar('-');
    } else
        a = nb;
    if (a > 9)
        my_put_nbr(a / 10);
    my_putchar(a % 10 + 48);
    return (0);
}