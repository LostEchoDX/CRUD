/*
** ETNA PROJECT, 22/10/2019 by abdelr_o
** STRINGS
** File description:
**      compare strings
*/

#include <stdlib.h>

int my_strcmp(const char *s1, const char *s2)
{
    int i;
  
    if (s1 == NULL || s2 == NULL)
        {
            return 1;
        }
    
    if (s1[0] < s2[0])
        {
            return(-1);
        }
    if (s1[0] > s2[0])
        {
            return(1);
        }
    
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
        {
        }

    if (s1[i] == s2[i])
        {
            return(0);
        }
    if (s1[i] < s2[i] && i > 0)
        {
            return(-1);
        }
    if (s1[i] > s2[i] && i > 0)
        {
            return(1);
        }
    return(0);
}
        
