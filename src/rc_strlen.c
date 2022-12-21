/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_strlen
*/

#include "bsq.h"

int rc_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}
