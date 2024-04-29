#include "vector.h"

void print_elem(Elem *p)
{
    printf("%.3f", *p);
}

void print_vector(struct Vector *v)
{
    if (v != NULL)
    {
        printf("[");
        for (int i = 0; i < v->len; i++)
        {
            print_elem(v->data + i);
            if (i < v->len - 1)
            {
                printf(", ");
            }
        }
        printf("]");
    }
}

struct Vector example_vector()
{
    struct Vector v;
    int size = 20;
    Elem *p = (Elem *)malloc(size * sizeof(Elem));
    for (int i = 0; i < size; i++)
    {
        p[i] = -i;
    }
    v.len = size;
    v.data = p;
    return v;
}

void free_vector(struct Vector *v)
{
    if (v != NULL)
    {
        v->len = 0;
        if (v->data != NULL)
        {
            free(v->data);
        }
    }
}

int vector_len(struct Vector *v)
{
    return v->len;
}