/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_strcpy
*/

#include "bsq.h"

char *rc_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
