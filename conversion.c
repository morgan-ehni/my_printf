/*
** EPITECH PROJECT, 2020
** conversion
** File description:
** functions that convert in octal or binary base
*/

#include <stdlib.h>
#include "my.h"

int convert(int nb, int base)
{
    int i = 0;
    char nbr[33];

    while (nb != 0) {
        nbr[i] = nb % base + '0';
        i++;
        nb = nb / base;
    }
    my_revstr(nbr);
    my_putstr(nbr);
    return (0);
}
