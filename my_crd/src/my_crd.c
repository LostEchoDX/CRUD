/*
** ETNA PROJECT, 04/11/2019 by abdelr_o
** my_crd
** File description:
**      manage a set of values linked to keys
*/

#include "../include/my_crd.h"
#include "../include/my.h"

linked_list_t *my_free_node(linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = list;
    while ( tmp != NULL)
        {
            linked_list_t *dlt;
            free (tmp->key);
            free (tmp->value);
            dlt = tmp;
            tmp = tmp->next;
            free (dlt);
        }
    return (NULL);
}

int main (void)
{
    char *ret;
    char *value;
    char *key;
    linked_list_t *cell = NULL;
    linked_list_t *check;
    
    while ( (ret = my_readline()) != NULL )
        {
            key = parse_key(ret);
            value = parse_value(ret);
            
            check = my_find_node(cell, key);
            
            insert(check, &cell, key, value);
            
            find_delete(check, &cell, key, value);

            free (ret);
        }
    free (key);
    my_free_node(cell);
}
