/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** count_tab_line
*/

#include "bsq.h"

int count_tab_line(char **tab)
{
    int i = 0;

    for (; tab[i]; i++);
    return i;
}
