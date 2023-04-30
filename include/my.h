/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday08-ethan.flak
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #define feur for

int my_put_double(double chiffre);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putstr_special(char *s);
int my_putnbr_base(int nbr, char const *base);
int my_put_unsignedint(unsigned int nb);
int my_strlen(char const *str);
int my_char_isalpha(char str);
int my_char_isnum(char const c);
int my_put_float(double f, int dec);
int my_put_pointer(int p);
int my_putnbr_base_unsignedint(int n, char const *base);
int my_printf(char const *format, ...);
char *my_strncat(char *dest, char const *src, int nb);
int padding_space(char const *flag);

#endif
