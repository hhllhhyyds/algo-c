#include "assert.h"

void handle_error(char *err)
{
    printf("Error: ");
    if (err != NULL)
    {
        printf("%s", err);
    }
    else
    {
        printf("Found an error");
    }
    printf("\n");
    exit(-1);
}

void my_assert(bool condition, char *err)
{
    if (condition == false)
    {
        handle_error(err);
    }
}

bool float_eq(float a, float b)
{
    float diff = a - b;
    float eps = 1e-6;
    return diff < eps && diff > -eps;
}

bool double_eq(double a, double b)
{
    double diff = a - b;
    double eps = 1e-14;
    return diff < eps && diff > -eps;
}
