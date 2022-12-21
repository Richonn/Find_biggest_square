/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** change_into_bsq
*/

#include "bsq.h"

void change_bsq(square_t *square, char **tab)
{
    for (int i = -1; i < square->max; i++)
        for (int j = 0; j < square->max; j++)
            tab[square->y - i][square->x - j] = 'x';
    rc_print_tab(tab);
}
