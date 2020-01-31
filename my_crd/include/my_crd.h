/*
** ETNA PROJECT, 04/11/2019 by abdelr_o
** my_crd
** File description:
**      includes and structres
*/
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct linked_list_s
{
    char *key;
    char *value;
    struct linked_list_s *next;
} linked_list_t;


char *my_readline(void);
char *parse_key(char *ret);
char *parse_value(char *ret);
linked_list_t *my_push_front_to_list(char *key, char *value, linked_list_t *list);
linked_list_t *my_find_node(linked_list_t *list, const char *data_ref);
linked_list_t *my_delete_nodes(linked_list_t *list, const char *data_ref);
void insert ( linked_list_t *check, linked_list_t **cell, char *key, char *value );
void find_delete ( linked_list_t *check, linked_list_t **cell, char *key, char *value );
