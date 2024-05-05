#include <stddef.h>

#include "linked_list.h"

struct LinkedList empty_list()
{
    struct LinkedList list;
    list.len = 0;
    list.head = NULL;
    return list;
}