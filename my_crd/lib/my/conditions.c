/*
** ETNA PROJECT, 08/11/2019 by abdelr_o
** my_crd
** File description:
**      frees and contions
*/

#include "../../include/my.h"
#include "../../include/my_crd.h"

linked_list_t *my_push_front_to_list(char *key, char *value, linked_list_t *list)
{
    linked_list_t *node;

    node = malloc(sizeof(*node));
    if (node == 0)
        {
            return (0);
        }
    node->next = list;
    node->key = key;
    node->value = value;
    return (node);
}

linked_list_t *my_find_node(linked_list_t *list, const char *data_ref)
{
    linked_list_t *tmp;

    tmp = list;
    while ( tmp != NULL) {
            if (my_strcmp(tmp->key, data_ref) == 0) {
                    return (tmp);
                }
            tmp = tmp->next;
        }
    return (NULL);
}

linked_list_t *my_delete_nodes(linked_list_t *list, const char *data_ref)
{
    linked_list_t *tmp;
    linked_list_t *dlt;

    if ( list->next == NULL && my_strcmp(list->key, data_ref) == 0 ) {
        free(list->key);
        free(list->value);
        list = NULL;
        return (list);
    }

    tmp = list;

    if ( my_strcmp(tmp->key, data_ref) == 0 ) {
            dlt = tmp;
            tmp = tmp->next;
        }

    while ( tmp->next != NULL  && dlt == NULL)
        {
            if ( tmp->next->next == NULL && my_strcmp(tmp->next->key, data_ref) == 0 ) {
                    dlt = tmp->next;
                    tmp->next = NULL;
                }
            else {
                if ( my_strcmp(tmp->next->key, data_ref) == 0 ) {
                        dlt = tmp->next;
                        tmp->next = tmp->next->next;
                    }
                tmp = tmp->next;                     
            }
        }
    free (dlt->key);
    free (dlt->value);
    free (dlt);
    return (NULL);
}

void insert ( linked_list_t *check, linked_list_t **cell, char *key, char *value )
{
    if ( check == NULL && value != NULL && my_strcmp(value, "D") != 0 && key != NULL ) {
        *cell = my_push_front_to_list(key, value, *cell);
        my_putstr((*cell)->key);
        my_putchar('\n');
    }
    if ( check != NULL && value != NULL && my_strcmp(value, "D") != 0 && key != NULL ) {
        check->value = value;
        my_putstr(check->key);
        my_putchar('\n');
    }
}

void find_delete ( linked_list_t *check, linked_list_t **cell, char *key, char *value )
{
    if ( check != NULL && value == NULL && key != NULL ) {
        my_putstr(check->value);
        my_putchar('\n');
    }

    if ( check != NULL && my_strcmp(value, "D") == 0  && key != NULL ) {
        my_putstr(check->value);
        my_putchar('\n');
        my_delete_nodes(*cell, key);
    }

    if ( check == NULL &&  my_strcmp(value, "D") == 0 && key != NULL ) {
        my_putstr("-1");
        my_putchar('\n');
    }

    if ( check == NULL && value == NULL && key != NULL ) {
        my_putstr("-1");
        my_putchar('\n');
    }
}
