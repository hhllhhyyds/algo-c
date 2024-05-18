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
    printf("%f", a.head->val);
    my_assert(a.head->val == 10, "assert error");
}

void test_get_value()
{
    struct ListNode *node0 = new_list_node(10.0);
    struct ListNode *node1 = new_list_node(30.0);
    node0->next = node1;
    Elem a = get_value(node0, 0);
    Elem b = get_value(node0, 1);
    my_assert(double_eq(a, 10.0), "get error");
    my_assert(double_eq(b, 30.0), "get error");
}

int main()
{
    test_list_insert();
    test_linkedlist_insert();
    test_get_value();
}
