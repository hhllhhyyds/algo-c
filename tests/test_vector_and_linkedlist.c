// 用for 循环同时遍历 LinkedList 和 Vector, 遍历过程中比较各自的元素是否相等
#include <vector_and_linkedlist.h>
#include <stdio.h>
void test_vector_insert_linkedlist()
{
    struct Vector new_example_v = new_example_vector();
    struct LinkedList new_list = new_empty_list();
    for (int i = 0; i < 100; i++)
    {
        float n = vector_get(&new_example_v, i);
        struct ListNode *node = new_list_node(n);
        linkedlist_insert_head(&new_list, node);
    }

    for (int i = 0; i < 100; i++)
    {
    }
}

int main()
{
}
