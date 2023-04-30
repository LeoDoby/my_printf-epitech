/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Day04 - Task03
*/
#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str)
{
    int len;
    len = 0;
    for (int i = 0; str[i]; i++) {
        len++;
    }
    return len;
}
