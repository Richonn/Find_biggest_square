/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** count_ln_clmn
*/

#include "bsq.h"

int count_line(char *str)
{
    int nb = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '\n')
            nb++;
    return nb - 1;
}

int count_clm(char *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++);
    return i;
}
