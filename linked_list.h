#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elem.h"

struct ListNode
{
    int val;               // 节点值
    struct ListNode *next; // 指向下一节点的指针
};

struct LinkedList
{
    int len;
    struct ListNode *head;
};

struct ListNode *new_list_node(int val);

/* 在链表的节点 n0 之后插入节点 P */
void list_insert(struct ListNode *n0, struct ListNode *P);

// 将一个节点插入到链表头部
void linkedlist_insert_head(struct LinkedList *list, struct ListNode *p);

struct LinkedList empty_list();

#endif