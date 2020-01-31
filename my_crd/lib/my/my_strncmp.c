/*
** ETNA PROJECT, 22/10/2019 by abdelr_o
** STRINGS
** File description:
**      compare n strings
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i;
  
    if (s1[0] < s2[0])
        {
            return(-1);
        }
    if (s1[0] > s2[0])
        {
            return(1);
        }
    
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n-1; i++)
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
