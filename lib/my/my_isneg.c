/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** Display N if the number is negative, otherwise P.
*/

#include "../../include/my.h"

void my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
}
