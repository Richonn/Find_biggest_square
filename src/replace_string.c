/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** replace_string
*/

#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

int **replace_all(char **tab, int len)
{
    int i = 0;
    int j = 0;
    square_t *square = malloc(sizeof(square_t));

    square->array = malloc(sizeof(int *) * (len + 1));
    for (; tab[i]; i++) {
        square->array[i] = malloc(sizeof(int) * rc_strlen(tab[i]));
        for (j = 0; tab[i][j] != '\n'; j++)
            square->array[i][j] = (tab[i][j] == '.') ? 1 : 0;
        square->array[i][j] = '\n';
    }
    square->array[i] = NULL;
    return square->array;
}
