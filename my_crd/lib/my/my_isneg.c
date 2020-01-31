/*
** ETNA PROJECT, 21/10/2019 by abdelr_o
** FIRST PROGRAM IN C
** File description:
**      my_isneg_alpha
*/

#include <unistd.h>

void my_putchar(char c);

void my_isneg(int n)
{
    if (n < 0)
        {
            my_putchar('N');
        }
    else
        {
             my_putchar('P');
        }
}
