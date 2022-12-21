/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** generate_map
*/

#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

char *generate_map(char **av)
{
    int a = 0;
    int size = rc_getnbr(av[1]);
    char *str = av[2];
    char *str_max = malloc(sizeof(char) * (size * (size + 1) + 1));

    for (int i = 0; a < size * (size + 1);) {
        for (int j = 0; j < size; i++, a++, j++) {
            (str[i] == '\0') ? i = 0 : 0;
            str_max[a] = str[i];
        }
        str_max[a++] = '\n';
    }
    str_max[a] = '\0';
    return str_max;
}
