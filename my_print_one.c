/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_print_one.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "include/my.h"

//flag 'c'
int my_print_char(char flag, char *full_flag, int i, va_list ap)
{
    my_putchar(va_arg(ap, int));
    return 1;
}

//flag 'd' & 'i'
int my_print_nbr(char flag, char *full_flag, int i, va_list ap)
{
    my_put_nbr(va_arg(ap, int));
    return 1;
}

//flag 'o'
int my_print_octal(char flag, char *full_flag, int i, va_list ap)
{
    my_putnbr_base_unsignedint(va_arg(ap, int), "01234567");
    return 1;
}

//flag 'u'
int my_print_unsigned(char flag, char *full_flag, int i, va_list ap)
{
    my_putnbr_base_unsignedint(va_arg(ap, int), "0123456789");
    return 1;
}

//flag 'x' & 'X'
int my_print_hexa(char flag, char *full_flag, int i, va_list ap)
{
    if (flag == 'x')
        my_putnbr_base_unsignedint(va_arg(ap, int), "0123456789abcdef");
    if (flag == 'X')
        my_putnbr_base_unsignedint(va_arg(ap, int), "0123456789ABCDEF");
    return 1;
}
