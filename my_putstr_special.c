/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_putstr_special.c
*/
#include "include/my.h"

static int check_ascii(char *s, int i, int n)
{
    if (s[i] >= 127 || s[i <= 31]) {
        my_putchar(92);
        n = s[i];
        if (n >= 0 && n <= 7) {
            my_putchar('0');
            my_putchar('0');
        }
        my_putnbr_base_unsignedint(n, "01234567");
    } else {
        my_putchar(s[i]);
    }
    return 0;
}

int my_putstr_special(char *s)
{
    int n = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        check_ascii(s, i, n);
    }
    return 0;
}
