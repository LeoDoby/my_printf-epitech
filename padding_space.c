/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** padding_space.c
*/
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"

int padding_space(char const *flag)
{
    if (my_char_isnum(flag[1]) == 1) {
        my_putchar(' ');
    }
}
