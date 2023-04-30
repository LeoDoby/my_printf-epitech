/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_putnbr_base_unsignedint.c
*/
#include "include/my.h"

int my_putnbr_base_unsignedint(int n, char const *base)
{
    int len = my_strlen(base);

    if (n != 0)
        my_putnbr_base_unsignedint(n / len, base);
    else
        return 0;
    my_putchar(base[n % len]);
    return 1;
}
