/*
** EPITECH PROJECT, 2022
** my_putnbr_base.c
** File description:
** Day06-Task18
*/
#include <stdio.h>

void my_putchar(char c);
int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base)
{
    if (nbr < -2147483647) {
        return 0;
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    int len = my_strlen(base);
    int p = nbr % len;

    nbr /= len;
    if (nbr > 0) {
        my_putnbr_base(nbr, base);
    }
    my_putchar(base[p]);
    return 0;
}
