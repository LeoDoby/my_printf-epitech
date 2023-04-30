/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_float.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "include/my.h"

int my_put_float(double dbl, int dec)
{
    int base = 0;
    int unit = 0;

    my_put_double(dbl);
    dbl = dbl - (long long)dbl;
    my_putchar('.');
    for (int i = 0; i < dec; i++) {
        dbl *= 10;
        unit = (long long)dbl % 10;
        if (i == dec - 1)
            dbl *= 10;
        if ((long long)dbl % 10 > 5 && i == dec - 1)
            unit += 1;
        my_putchar(unit + '0');
    }
    return 0;
}
