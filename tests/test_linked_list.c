#include <stdio.h>
#include "linked_list.h"
#include "assert.h"

void test_list_insert()
{
    ListNode *node0 = newListNode(10);
    ListNode *node1 = newListNode(30);
    node0->next = node1;
    ListNode *node2 = newListNode(20);
    list_insert(&node1, &node2);
    int a =
        my_assert();
}

int main()
{
    test_list_insert();
}
