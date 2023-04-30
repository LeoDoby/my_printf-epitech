/*
** EPITECH PROJECT, 2022
** my put double
** File description:
** print a int part of a double
*/
#include <stdio.h>
#include "include/my.h"

int my_put_double(double chiffre)
{
    if (chiffre < 0)
        chiffre = -chiffre;
    if (chiffre < 1)
        my_putchar('0');
    if (chiffre >= 10)
        my_put_double(chiffre / 10);
    my_putchar(48 + (long long)chiffre % 10);
    return 0;
}
