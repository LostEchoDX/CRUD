/*
** ETNA PROJECT, 22/10/2019 by abdelr_o
** STRINGS
** File description:
**      n copy
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;

    for (i = 0; i < n; i++)
        {
            dest[i] = src[i];
        }
    dest[i] = '\0';
    return(dest);
}
