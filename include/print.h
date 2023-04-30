/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday08-ethan.flak
** File description:
** struct for my_printf
*/

#ifndef PRINT_H
    #define PRINT_H

    #include <stdarg.h>

int my_print_char(char flag, char const *full_flag, int i, va_list ap);
int my_print_nbr(char flag, char const *full_flag, int i, va_list ap);
int my_print_octal(char flag, char const *full_flag, int i, va_list ap);
int my_print_unsigned(char flag, char const *full_flag, int i, va_list ap);
int my_print_hexa(char flag, char const *full_flag, int i, va_list ap);
int my_print_string(char flag, char const *full_flag, int i, va_list ap);
int my_print_binary(char flag, char const *full_flag, int i, va_list ap);
int my_print_percentage(char flag, char const *full_flag, int i, va_list ap);
int my_print_pointer(char flag, char const *full_flag, int i, va_list ap);
int my_print_float(char flag, char const *full_flag, int i, va_list ap);

    struct functions {
        char flag;
        int (*function)(char flag, char const *full_flag, int i, va_list ap);
    };

    const struct functions FUNC[] = {{'d', &my_print_nbr},
    {'i', &my_print_nbr},
    {'o', &my_print_octal}, {'u', &my_print_unsigned}, {'x', &my_print_hexa},
    {'X', &my_print_hexa}, {'e', &my_print_char}, {'E', &my_print_char},
    {'f', &my_print_float}, {'F', &my_print_float}, {'g', &my_print_char},
    {'G', &my_print_char}, {'a', &my_print_char}, {'A', &my_print_char},
    {'c', &my_print_char}, {'s', &my_print_string}, {'p', &my_print_pointer},
    {'n', &my_print_char}, {'%', &my_print_percentage},
    {'b', &my_print_binary}, {'S', &my_print_string}};

#endif
