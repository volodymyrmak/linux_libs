#include "math_lib.h"

unsigned long factorial(int n)
{
    if (n < 0)
    {
        printf("Error! Negative number is not acceptable for factorial operation.\n");
        return 0UL;
    }

    unsigned long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }

    return result;
}
