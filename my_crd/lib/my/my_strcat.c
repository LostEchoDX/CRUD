/*
** ETNA PROJECT, 23/10/2019 by abdelr_o
** STRINGS
** File description:
**      concatenate
*/

char *my_strcat(char *dest, const char *src)
{
    int i;
    int n = 0;

   for (i = 0; dest[i] != '\0'; i++)
       {
       }

   while (src[n] != '\0')
       {
           dest[i] = src[n];
           i++;
           n++;
       }

   if (src[n] == '\0')
       {
           dest[i] = src[n];
       }
   return(dest);
}
