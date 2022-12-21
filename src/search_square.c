/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** search_square
*/

#include <stdio.h>
#include "bsq.h"

int find_low(int a, int b, int c)
{
    if (a > b)
        a = b;
    if (a > c)
        a = c;
    return a + 1;
}

void check_around(int **array, int i, int j)
{
    if (array[i - 1][j] != 0 && array[i][j - 1] != 0 &&
    array[i - 1][j - 1] != 0)
        array[i][j] = find_low(array[i - 1][j], array[i][j - 1],
        array[i - 1][j - 1]);
}

void search_square(int **array, square_t *square)
{
    square->x = -1;
    square->y = -1;
    square->max = 0;

    for (int i = 1; array[i] != NULL; i++)
        for (int j = 1; j <= square->len; j++)
            (square->array[i][j] == 1) ? check_around(square->array, i, j) :
            0;
    for (int a = 0; array[a]; a++)
        for (int b = 0; b < square->len - 1; b++)
            (square->array[a][b] > square->max) ?
            square->max = square->array[a][b], square->x = b,
            square->y = a : 0;
}
