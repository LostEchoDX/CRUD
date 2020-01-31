/*
** ETNA PROJECT, 21/10/2019 by abdelr_o
** POINTERS AND ARRAYS
** File description:
**      my_putstr
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putstr(const char *str)
{
    write(1, str, my_strlen(str));
}
