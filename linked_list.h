#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "elem.h"

struct LinkedList
{
    int len;
    Elem *head;
};

struct LinkedList empty_list();

#endif