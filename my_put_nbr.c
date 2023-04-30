/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** Input any number and prints them
*/
#include <unistd.h>
void my_putchar(char c);

static int main_program(int nb)
{
    if (nb == 0) {
        return 0;
    }
    main_program(nb / 10);
    my_putchar('0' + nb % 10);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        write(1, "2147483648", 10);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        main_program(-nb);
        return 0;
    }
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    main_program(nb);
}
