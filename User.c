#include "defs.h"
#include <stdio.h>
#include <stdlib.h>

//general node, link of the list (user's friends or concatenated social network users.
typedef struct node{
    char* username;
    struct node* next;
}* Node;

//first link of the linked list (username for example)
typedef struct list{
    char* list_name;
    struct node* head;
    int num_items;
}* List;

void destroyList(Node ptr){
    while(ptr){

    }
}