/*
** ETNA PROJECT, 23/10/2019 by abdelr_o
** MEMORY ALLOCATION
** File description:
**      duplicate string
*/

#include<stdlib.h>

char *my_strdup(const char *src)
{
    char *yak;
    int i;
    int j;

    for (i = 0; src[i] != '\0'; i++)
        {
        }
    yak = malloc(i * sizeof(*src));

    for (j = 0; j <= i; j++)
        {
            yak[j] = src[j];
        }
    return(yak);
    free(yak);
}
