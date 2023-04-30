/*
** EPITECH PROJECT, 2022
** my_char_isalpha.c
** File description:
** check if a character is a letter
*/

int my_char_isalpha(char const c)
{
    if (c < 65 || c > 122) {
        return 0;
    }
    if (c < 97 && c > 90) {
        return 0;
    }
    return 1;
}
