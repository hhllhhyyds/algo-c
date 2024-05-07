#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elem.h"

typedef struct ListNode
{
    int val;               // 节点值
    struct ListNode *next; // 指向下一节点的指针
} ListNode;

ListNode *newListNode(int val);

/* 在链表的节点 n0 之后插入节点 P */
void list_insert(ListNode *n0, ListNode *P);

#endif