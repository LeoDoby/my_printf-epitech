/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_printf.c
*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "include/my.h"
#include "include/print.h"

// check if the flag is valid
int flag_check(char flag)
{
    int i = 0;
    char list[] = "diouxXeEfFgGaAcspn%bS.+-#0123456789";

    while (i < 35) {
        if (list[i] == flag) {
            return 1;
        }
        i++;
    }
    return 0;
}

int nbr_flag2(char c)
{
    if (c == 's' || c == 'S')
        return 15;
    if (c == '%')
        return 18;
    if (c == 'b')
        return 19;
    if (c == 'p')
        return 16;
}

int nbr_flag(char c)
{
    if (c == 'd' || c == 'i')
        return 0;
    if (c == 'o')
        return 2;
    if (c == 'u')
        return 3;
    if (c == 'x' || c == 'X')
        return 4;
    if (c == 'e' || c == 'E' || c == 'g' || c == 'G' || c == 'a' || c == 'A')
        return 6;
    if (c == 'c' || c == 'n')
        return 6;
    if (c == 'f' || c == 'F')
        return 8;
    return nbr_flag2(c);
}

int flags(char const *str, int i, va_list ap)
{
    int temp = 0;
    int hash = 0;
    char flag[500];
    int flag_len = 0;
    int offset = 0;

    while (flag_check(str[i]) == 1) {
        if (str[i] == '#')
            hash = 1;
        flag[offset] = str[i];
        flag_len++; i++; offset++;
        if (my_char_isalpha(str[i - 1]) == 1 && my_char_isalpha(str[i]) == 0)
            break;
    }
    flag[offset] = '\0';
    temp = nbr_flag(str[i - 1]);
    FUNC[temp].function(str[i - 1], str, i, ap);
    return flag_len;
}

int my_printf(const char *format, ...)
{
    int i = 0;
    int flag_len = 0;
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%')
            my_putchar(format[i]);
        if (format[i] == '%') {
            flag_len = flags(format, i++, ap);
            i += flag_len - 2;
        }
    }
    return i;
}
