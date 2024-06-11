#include "math_lib.h"

float divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error! Division by 0.\n");
        return 0.0f;
    }

    return (float)a / b;
}
