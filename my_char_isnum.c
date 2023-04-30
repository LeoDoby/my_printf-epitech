/*
** EPITECH PROJECT, 2022
** my_char_isalpha.c
** File description:
** check if a character is a number
*/

int my_char_isnum(char const c)
{
    if (c < 48 || c > 57) {
        return 0;
    }
    return 1;
}
