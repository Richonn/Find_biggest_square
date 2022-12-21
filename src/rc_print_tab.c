/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_print_tab
*/

#include "bsq.h"

void rc_print_tab_gen(char **tab)
{
    for (int i = 0; tab[i + 1]; i++)
        rc_putstr(tab[i]);
}

void rc_print_tab(char **tab)
{
    for (int i = 1; tab[i + 1]; i++)
        rc_putstr(tab[i]);
}
