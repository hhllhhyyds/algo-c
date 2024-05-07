#include <stddef.h>

#include "linked_list.h"
#include "assert.h"
// 空链表
// struct LinkedList empty_list()
// {
//     struct LinkedList list;
//     list.len = 0;
//     list.head = NULL;
//     return list;
// }

/* 构造函数 */
ListNode *newListNode(int val)
{
    ListNode *node;
    node = (ListNode *)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

/* 在链表的节点 n0 之后插入节点 P */
void list_insert(ListNode *n0, ListNode *P)
{
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}