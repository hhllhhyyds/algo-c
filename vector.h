#include <stdio.h>
#include <stdlib.h>

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

struct Vector example_vector();