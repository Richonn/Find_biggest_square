/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

int solve_bsq(char **av)
{
    square_t *square = malloc(sizeof(square_t));
    char *str = open_file(av[1]);
    char **tab = rc_str_to_word_array(str);
    char **new_tab;
    int len = 0;

    if (str[0] == '\0')
        return 84;
    len = rc_getnbr(str);
    if (error(len, str) == 84)
        return 84;
    new_tab = mod_tab(tab, len);
    square->len = rc_strlen(new_tab[0]);
    square->array = replace_all(new_tab, len);
    search_square(square->array, square);
    change_bsq(square, tab);
    return 0;
}

int solve_gen(char **tab, int len)
{
    int **array;

    array = replace_all(tab, len);
    search_square_gen(array, len, tab);
    return 0;
}

int main(int ac, char **av)
{
    char **tab;

    if (ac < 2 || ac > 3)
        return 84;
    if (ac == 2)
        if (solve_bsq(av) == 84)
            return 84;
    if (ac == 3) {
        if (av[2][0] == '\0')
            return 84;
        if (check_str(av[2]) == 84)
            return 84;
        tab = rc_str_to_word_array(generate_map(av));
        solve_gen(tab, rc_getnbr(av[1]));
    }
    return 0;
}
