/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** solve_gen
*/

#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

int **check_around_gen(int **array, int i, int j)
{
    if (array[i - 1][j] != 0 && array[i][j - 1] != 0 &&
    array[i - 1][j - 1] != 0) {
        array[i][j] = find_low(array[i - 1][j], array[i][j - 1],
        array[i - 1][j - 1]);
    }
    return array;
}

void search_square_gen(int **array, int len, char **tab)
{
    int x = -1;
    int y = -1;
    int max = 0;

    for (int i = 1; array[i] != NULL; i++)
        for (int j = 1; j <= len; j++)
            (array[i][j] == 1) ? array = check_around_gen(array, i, j) :
            0;
    for (int a = 0; array[a + 1]; a++)
        for (int b = 0; b < len; b++)
            (array[a][b] > max) ?
            (max = array[a][b], x = b, y = a) : 0;
    change_bsq_gen(tab, max, x, y);
}

void change_bsq_gen(char **tab, int max, int x, int y)
{
    for (int i = 0; i < max; i++)
        for (int j = 0; j < max; j++)
            tab[y - i][x - j] = 'x';
    rc_print_tab_gen(tab);
}
