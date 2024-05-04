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
            v->data = NULL;
        }
    }
}

int vector_len(struct Vector *v)
{
    return v->len;
}

void vector_push(struct Vector *v, Elem p)
{
    if (v->len >= v->capacity)
    {
        v->capacity *= 2;
        Elem *new_data = (Elem *)realloc(v->data, v->capacity * sizeof(Elem));
        if (new_data == NULL)
        {
            printf("Error: Failed to reallocate memory\n");
            exit(1);
        }
        v->data = new_data;
    }
    v->data[v->len] = p;
    v->len++;
}

Elem vector_get(struct Vector *v, size_t index)
{
    if (index >= 0 && index < v->len)
    {
        return v->data[index];
    }
    else
    {
        printf("Error: Index out of range\n");
        exit(1);
    }
}

void vector_set(struct Vector *v, size_t index, Elem p)
{
    if (index >= 0 && index < v->len)
    {
        v->data[index] = p;
    }
    else
    {
        printf("Error: Index out of range\n");
        exit(1);
    }
}