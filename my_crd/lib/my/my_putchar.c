/*
** ETNA PROJECT, 25/10/2019 by abdelr_o
** Header files - Makefile - Libmy - Parameters
** File description:
**      putchar
*/

#include<unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
