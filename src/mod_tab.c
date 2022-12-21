/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** mod_tab
*/

#include <stdlib.h>
#include "bsq.h"

char **mod_tab(char **tab, int len)
{
    int a = 0;
    char **save_tab = malloc(sizeof(char *) * (len - 2 + 1));

    for (int i = 1; tab[i + 1]; i++, a++) {
        save_tab[a] = malloc(sizeof(tab[i]) + 1);
        save_tab[a] = tab[i];
    }
    save_tab[a] = NULL;
    return save_tab;
}
