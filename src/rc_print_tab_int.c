/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_print_tab_int
*/

#include <unistd.h>
#include "bsq.h"

void rc_print_tab_int(int **tab)
{
    for (int i = 0; tab[i + 1] != NULL; i++) {
        for (int j = 0; tab[i][j] != '\n'; j++)
            rc_putnbr(tab[i][j]);
        rc_putchar('\n');
    }
}
