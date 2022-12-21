/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** error
*/

#include <stdlib.h>
#include "bsq.h"

int error(int nb, char *str)
{
    int len = 0;
    int second_line = 0;
    char **tab = malloc(sizeof(char *) * count_line(str) + 1);

    tab = rc_str_to_word_array(str);
    len = rc_strlen(tab[1]);
    if (len == 1)
        return 84;
    if (count_line(str) != nb)
        return 84;
    for (int i = 0; str[i] != '\n'; i++, second_line++);
    for (int i = second_line; str[i]; i++)
        if (str[i] != 'o' && str[i] != '\n' && str[i] != '\0' && str[i] != '.')
            return 84;
    for (int i = 1; i != count_line(str) + 1; i++)
        if (len != rc_strlen(tab[i]))
            return 84;
    return 0;
}

int check_str(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] != '.' && str[i] != 'o' && str[i] != '\n' && str[i] != '\0')
            return 84;
    return 0;
}
