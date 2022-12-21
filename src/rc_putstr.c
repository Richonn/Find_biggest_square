/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_putstr
*/

#include <unistd.h>
#include "bsq.h"

void rc_putstr(char *str)
{
    write(1, str, rc_strlen(str));
}
