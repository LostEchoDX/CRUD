/*
** ETNA PROJECT, 23/10/2019 by abdelr_o
** STRINGS
** File description:
**      n concatenate
*/

char *my_strncat(char *dest, const char *src, int nb)
{
    int i;
    int j = 0;

   for (i = 0; dest[i] != '\0'; i++)
       {
       }

   while (j < nb)
       {
           dest[i] = src[j];
           i++;
           j++;
       }

   if (j == nb)
       {
           i++;
           dest[i] = '\0';
       }
   return(dest);
}
