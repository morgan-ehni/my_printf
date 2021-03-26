/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** 
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char c;

    while (str[j] != '\0')
        j++;
    j = j - 1;
    while (j > i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}
