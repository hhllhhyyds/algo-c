#include "vector.h"
#include "assert.h"

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
    struct Vector v = empty_vector();

    int p;
    for (p = 0; p < 20; p++)
    {
        vector_push(&v, p);
    }
    return v;
}

void free_vector(struct Vector *v)
{
    if (v != NULL)
    {
        v->len = 0;
        v->capacity = 0;
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
        if (v->capacity == 0)
        {
            v->capacity++;
        }
        else
        {
            v->capacity *= 2;
        }
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

void vector_insert(struct Vector *v, Elem p, int index)
{
    my_assert(index <= v->len && index >= 0, "Index error, out of range");
    vector_push(v, 0);
    for (int i = v->len - 1; i > index; i--)
    {
        v->data[i] = v->data[i - 1];
    }
    v->data[index] = p;
}

void vector_delete(struct Vector *v, int index)
{
    my_assert(index < v->len && index >= 0, "Index error, out of range");
    for (int i = index; i < v->len - 1; i++)
    {
        v->data[i] = v->data[i + 1];
    }
    v->len--;
}

struct Vector empty_vector()
{
    struct Vector v;
    v.len = 0;
    v.capacity = 0;
    v.data = NULL;
    return v;
}