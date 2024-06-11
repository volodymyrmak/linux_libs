#include "math_lib.h"

double square_root(int n)
{
    if (n < 0)
    {
        printf("Error! Negative number is not acceptable for square root operation.\n");
        return 0UL;
    }

    double x = n;
    double epsilon = 0.000001;

    while ((x - n / x) > epsilon)
    {
        x = (x + n / x) / 2;
    }

    return x;
}
