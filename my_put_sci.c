/*
** EPITECH PROJECT, 2022
** my_put_sci
** File description:
** print a double in a scientific way
*/
#include "include/my.h"
#include <stdio.h>

int my_put_sci(char cases,int dec, double dbl)
{
    int i = 0;

    while (dbl >= 10){
        dbl = dbl / 10;
        i++;
    }
    my_put_float(dbl,dec);
    if (cases == 'e')
        my_putchar('e');
    if (cases == 'E')
        my_putchar('E');
    my_putchar('+');
    if (i < 10)
        my_putchar('0');
    my_put_nbr(i);
    return 0;
}
