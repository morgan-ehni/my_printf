/*
** EPITECH PROJECT, 2020
** amelioration printf
** File description:
** my_putoctalstr.c
*/

#include "my.h"

int my_putoctalstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <127)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            convert(str[i], 8);
        }
        i++;
    }
    return (0);
}
