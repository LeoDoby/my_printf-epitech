/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_pointer.c
*/
#include "include/my.h"

int my_put_pointer(int p)
{
    my_putstr("0x");
    my_putnbr_base_unsignedint(p, "0123456789abcdef");
    return 1;
}
