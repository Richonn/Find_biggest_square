/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** map_size
*/

#include "bsq.h"

int x_size(char *str, int nb)
{
    int x = 0;

    for (; str[nb] != '\n'; nb++, x++);
    return x;
}

int y_size(char *str)
{
    int nb_line = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '\n')
            nb_line++;
    return nb_line - 1;
}
