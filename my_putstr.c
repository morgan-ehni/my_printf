/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** 
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}