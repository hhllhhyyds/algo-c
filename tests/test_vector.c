#include <stdio.h>
#include "vector.h"
#include "assert.h"

void test_example_vector()
{
    struct Vector example_v = example_vector();
    printf("capacity = %d\n", example_v.capacity);
    my_assert(example_v.capacity == 32, "capacity incorrect");
    my_assert(example_v.len == 20, "length incorrect");
    for (int i = 0; i < example_v.len; i++)
    {
        float a = vector_get(&example_v, i);
        my_assert(float_eq(a, (float)i), "value error");
    }
    free_vector(&example_v);
    my_assert(example_v.len == 0, "length incorrect");
    my_assert(example_v.capacity == 0, "capacity incorrect");
    my_assert(example_v.data == NULL, "data incorrect");
}

void test_vector_set()
{
    struct Vector example_v = example_vector();
    vector_set(&example_v, 15, 15);
    float b = vector_get(&example_v, 15);
    my_assert(float_eq(b, 15.0), "set error");
}

void test_vector_push()
{
    struct Vector example_v = empty_vector();
    int i, j, k;
    for (i = 0; i < 50; i++)
    {
        int a = 2 * i;
        vector_push(&example_v, a);
    }
    my_assert(example_v.len == 50, "length error");
    for (j = 0; j < 50; j++)
    {
        float d = vector_get(&example_v, j);
        my_assert(float_eq(d, 2 * j), "push error");
    }
}

void test_vector_insert()
{
    struct Vector example_v = example_vector();
    vector_insert(&example_v, 5.5, 6);
    float e = vector_get(&example_v, 6);
    my_assert(float_eq(e, 5.5), "insert error");
    free_vector(&example_v);
    for (int i = 19; i >= 0; i--)
    {
        vector_insert(&example_v, i, 0);
    }
    for (int j = 0; j < 20; j++)
    {
        float d = vector_get(&example_v, j);
        my_assert(float_eq(d, j), "insert error");
    }
}

void test_vector_delete()
{
    struct Vector example_v = example_vector();
    float h = vector_get(&example_v, 7);
    my_assert(float_eq(h, 7), "delete error");
    vector_delete(&example_v, 7);
    float f = vector_get(&example_v, 7);
    my_assert(float_eq(f, 8), "delete error");
}

void test_vector_find()
{
    struct Vector example_v = example_vector();
    int j = vector_find(&example_v, 10.0);
    my_assert(j == 10, "find error");
    int k = vector_find(&example_v, 23.0);
    my_assert(k == -1, "find error");
}

int main()
{
    test_example_vector();
    test_vector_push();
    test_vector_set();
    test_vector_insert();
    test_vector_delete();
    test_vector_find();
    return 0;
}