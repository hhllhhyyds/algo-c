#include <stdio.h>
#include "linked_list.h"
#include "assert.h"

void test_list_insert()
{
    struct ListNode *node0 = new_list_node(10);
    struct ListNode *node1 = new_list_node(30);
    node0->next = node1;
    struct ListNode *node2 = new_list_node(20);
    list_insert(node0, node2);
    struct ListNode *p = node0;
    my_assert(p->val == 10, "value error 10");
    p = p->next;
    my_assert(p->val == 20, "value error 20");
    p = p->next;
    my_assert(p->val == 30, "value error 30");
}

void test_linkedlist_insert()
{
    struct ListNode *node0 = new_list_node(10);
    struct LinkedList a = empty_list();
    linkedlist_insert_head(&a, node0);
    printf("%d", a.len);
    printf("%d", a.head->val);
    my_assert(a.head->val == 10, "assert error");
}

int main()
{
    test_list_insert();
    test_linkedlist_insert();
}
