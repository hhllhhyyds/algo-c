#include <stdio.h>
#include <vector_and_linkedlist.h>

/*  新建一个 空的 Vector, 往 Vector 中依次插入 0 .. 100 这 100 个数
    新建一个 空的 LinkedList
    遍历上述 Vector，依次把其中的元素插入到 LinkedList
    用 for 循环同时遍历 LinkedList 和 Vector, 遍历过程中比较各自的元素是否相等*/

// 建1个新vector
struct Vector new_empty_vector()
{
    struct Vector v;
    v.len = 0;
    v.capacity = 0;
    v.data = NULL;
    return v;
}

struct Vector new_example_vector()
{
    struct Vector v = new_empty_vector();
    int p;
    for (p = 0; p < 100; p++)
    {
        vector_push(&v, p);
    }
    return v;
}

struct LinkedList new_empty_list()
{
    struct LinkedList List;
    List.len = 0;
    List.head = NULL;
    return List;
}

void vector_insert_linkedlist()
{
    int i, j;
    struct Vector example_v = new_example_vector();
    struct LinkedList a = new_empty_list();
    for (i = 99; i < 100; i++)
    {
        float n = vector_get(&example_v, i);
        struct ListNode *Nodei = new_list_node(n);
        linkedlist_insert_head(&a, Nodei);
    }
}
