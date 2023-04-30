/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_print_two.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "include/my.h"

//flag 's' & 'S'
int my_print_string(char flag, char *full_flag, int i, va_list ap)
{
    if (flag == 's')
        my_putstr(va_arg(ap, char *));
    if (flag == 'S') {
        my_putstr(va_arg(ap, char *));
    }
    return 1;
}

//flag 'b'
int my_print_binary(char flag, char *full_flag, int i, va_list ap)
{
    if (flag == 'b')
        my_putnbr_base_unsignedint(va_arg(ap, int), "01");
    return 1;
}

//flag '%'
int my_print_percentage(char flag, char *full_flag, int i, va_list ap)
{
    if (flag == '%')
        my_putchar('%');
        return 1;
}

//flag 'p'
int my_print_pointer(char flag, char *full_flag, int i, va_list ap)
{
    my_put_pointer(va_arg(ap, int));
    return 1;
}

//flag 'f' & 'F'
int my_print_float(char flag, char *full_flag, int i, va_list ap)
{
    if (flag == 'f')
        my_put_float(va_arg(ap, double), 6);
    if (flag == 'F')
        my_put_float(va_arg(ap, double), 6);
    return 1;
}
