/*
** ETNA PROJECT, 05/11/2019 by abdelr_o
** my_crd
** File description:
**      secondary file
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

char *parse_key(char *ret)
{
    int i;
    char *key;

    for ( i = 0; ret[i] != ' ' && ret[i] != '\0'; i++) {
        if ( ret[i] < '0' || ret[i] > '9' ) {
            my_putstr("Please enter a number\n");
            return NULL;
        }
    }

    key = malloc (sizeof (char) * (i + 1));

    for ( i = 0; ret[i] != ' ' && ret[i] != '\0'; i++) {
        key[i] = ret[i];
    }
    key[i] = '\0';

    return (key);
}

char *parse_value(char *ret)
{
    int i;
    int j;
    int k = 0;
    char *value;

    for ( i = 0; ret[i] != ' ' && ret[i] != '\0'; i++) {
    }
    if ( ret[i] == '\0' ) {
        return NULL;
    }
    for ( j = i + 1; ret[j] != ' ' && ret[j]!= '\0'; j++) {
        if ( ret[j] != 'D' ) {
            if ( ret[j] < '0' || ret[j] > '9' ) {
                my_putstr("Please enter a number\n");
                return NULL;
            }
        }
    }
    value = malloc (sizeof (char) *  (j - i + 1));

    for ( j = i + 1; ret[j] != ' ' && ret[j] != '\0'; j++) {
        value[k] = ret[j];
        k++;
    }
    value[k] = '\0';

    return (value);
}

char *my_readline(void)
{
  size_t n = 0;
  char *ret = NULL;
  ssize_t result = getline(&ret, &n, stdin);

  if (result <= 0) {
    free(ret);
    return NULL;
  }
  if (ret[result - 1] == '\n') {
    ret[result - 1] = '\0';
  }
  return ret;
}
