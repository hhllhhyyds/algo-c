#include <stdio.h>
#include "vector.h"
#include "assert.h"
int main()
{
    printf("Lets show the example vector\n");
    struct Vector example_v = example_vector();
    assert(float_eq((float)example_v.len, (float)20), NULL);
    assert(float_eq((float)vector_get(&example_v, 3), -3.00), NULL);
    printf("example vector with length = %d is\n", example_v.len);
    print_vector(&example_v);
    printf("\n");
    free_vector(&example_v);
    return 0;
}