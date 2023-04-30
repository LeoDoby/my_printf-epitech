/*
** EPITECH PROJECT, 2022
** unsigned int
** File description:
** print an unsigned int
*/
#include <stdio.h>
#include "include/my.h"

int my_put_unsignedint(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr (nb / 10);
    my_putchar(48 + nb % 10);
    return 0;
}
