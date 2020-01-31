/*
** ETNA PROJECT, 22/10/2019 by abdelr_o
** STRINGS
** File description:
**      locate a substring
*/

#include<stddef.h>

char *my_strstr(char *str, const char *to_find)
{
    int i = 0;
    int n = 0;

    if (to_find[n] == '\0')
        {
            return(str);
        }
    
    while (str[i] != '\0')
        {
            while (str[i] != to_find[n] && str[i] != '\0')
                {
                    i++;
                }
            if (str[i] == to_find[n])
                {
                    i++;
                    n++;
                }
            if (to_find[n] == '\0')
                {
                    return(&str[i - n]);
                }
        }
    if (str[i] == '\0' && to_find [n] != '\0')
        {
            return(NULL);
        }
    return(NULL);
}
