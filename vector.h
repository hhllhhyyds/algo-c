#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef float Elem;

struct Vector
{
    int len;
    Elem *data;
};

void print_elem(Elem *p);
void print_vector(struct Vector *v);
void free_vector(struct Vector *v);
int vector_len(struct Vector *v);

/// @brief 在 Vecotr 末尾插入一个新元素，如果原有的空间不够，则分配新的空间。这样我们就支持了可变长的数组
/// @param v 将插入的数组的指针
/// @param p 将插入的数组的元素
void vector_push(struct Vector *v, Elem p);

/// @brief 获取可变长数组位于序号 index 位置的元素
/// @param index
Elem vector_get(size_t index);

/// @brief 将可变长数组位于序号 index 位置的值设置成新的元素
/// @param index
/// @param p
void vector_set(size_t index, Elem p);

struct Vector example_vector();

#endif