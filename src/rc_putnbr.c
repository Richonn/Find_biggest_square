/*
** EPITECH PROJECT, 2022
** Find_biggest_square
** File description:
** rc_putnbr
*/

#include "bsq.h"

int rc_putnbr(int nb)
{
    (nb == -2147483648) ? (rc_putchar('-'), rc_putchar('2'), nb = 147483648) :
    nb;
    (nb < 0) ? (rc_putchar('-'), (nb = nb * -1)) : nb;
    (nb >= 9) ? (rc_putnbr(nb / 10)) : nb;
    rc_putchar(nb % 10 + '0');
    return 0;
}
