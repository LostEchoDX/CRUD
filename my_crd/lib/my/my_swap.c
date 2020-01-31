/*
** ETNA PROJECT, 21/10/2019 by abdelr_o
** POINTERS AND ARRAYS
** File description:
**      my_swap
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;   
}
