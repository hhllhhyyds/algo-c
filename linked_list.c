#include <stdlib.h>

#include "linked_list.h"
#include "assert.h"
// 空链表
struct LinkedList empty_list()
{
    struct LinkedList list;
    list.len = 0;
    list.head = NULL;
    return list;
}

/* 构造函数 */
struct ListNode *new_list_node(Elem val)
{
    struct ListNode *node;
    node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

/* 在链表的节点 n0 之后插入节点 P */
void list_insert(struct ListNode *n0, struct ListNode *p)
{
    struct ListNode *n1 = n0->next;
    p->next = n1;
    n0->next = p;
}

// 将一个节点插入到链表头部
void linkedlist_insert_head(struct LinkedList *list, struct ListNode *p)
{
    if (list == NULL || p == NULL)
    {
        return;
    }
    p->next = list->head;
    list->head = p;
    list->len++;
}

// 取值
int get_value(struct ListNode *head, int Index)
{
    struct ListNode *current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == Index)
        {
            return current->val;
        }
        count++;
        current = current->next;
    }
    return -1;
}
