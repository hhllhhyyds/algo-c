#include <stdio.h>

#include "vector.h"

int main()
{
    printf("Lets show the example vector\n");
    struct Vector example_v = example_vector();
    printf("example vector with length = %d is\n", example_v.len);
    print_vector(&example_v);
    printf("\n");
    free_vector(&example_v);
    return 0;
}