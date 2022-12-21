/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_putchar
*/

#include <unistd.h>
#include "bsq.h"

void rc_putchar(char c)
{
    write(1, &c, 1);
}
