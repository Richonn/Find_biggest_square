/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_strcat
*/

#include "bsq.h"

char *rc_strcat(char *dest, char *src)
{
    int len = rc_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
