/*
** ETNA PROJECT, 01/11/2019 by abdelr_o
** libmy
** File description:
**      parse out number
*/

#include<stdio.h>

int convert(char *cnv)
{
    long val = 0;
    
    for (int k = 0; cnv[k] != '\0'; k++)
        {
            if ( cnv[k] == '-' )
                {
                    k++;
                }
            val = val * 10 + (cnv[k] - 48);
        }

    if ( cnv[0] == '-')
        {
            val = -val;
        }

    if (val != (int)val)
        {
            return (0);
        }
    return (val);
}

int my_getnbr(const char *str)
{
    char scan[12];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
        {
            while ( str[i] <= '9' && str[i] >= '0' )
                {
                    if ( str[(i-1)] == '-' )
                        {
                            scan[j] = '-';
                            j++;
                        }
                    scan[j] = str[i];
                    i++;
                    j++;

                    if ( str[i] > '9' || str[i] < '0' )
                        {
                            return(convert(scan));
                        }
                }
        }
    return (0);
}
