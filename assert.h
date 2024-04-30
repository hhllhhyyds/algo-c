#ifndef ASSERT_H
#define ASSERT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void assert(bool condition, char *err);
bool float_eq(float a, float b);
bool double_eq(double a, double b);

#endif