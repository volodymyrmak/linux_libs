#include <stdbool.h>

#include "math_lib.h"

void get_one_operand_from_console(int* operand)
{
    printf("Enter the operand: ");
    scanf("%i", operand);
}

void get_two_operands_from_console(int* operand1, int* operand2)
{
    printf("Enter the first operand: ");
    scanf("%i", operand1);

    printf("Enter the second operand: ");
    scanf("%i", operand2);
}

int main()
{
    bool exit = false;
    while (!exit)
    {
        printf("Choose one of the available operations:\n");
        printf("\t1. Sum\n");
        printf("\t2. Difference\n");
        printf("\t3. Multiplication\n");
        printf("\t4. Division\n");
        printf("\t5. Factorial\n");
        printf("\t6. Square root\n");
        printf("\t7. Exit\n");
        printf("\n");

        int operation;
        printf("Operation: ");
        scanf("%i", &operation);

        int operand1, operand2;
        switch (operation)
        {
        case 1:  // sum
            get_two_operands_from_console(&operand1, &operand2);
            int sum_result = sum(operand1, operand2);
            printf("%i + %i = %i\n", operand1, operand2, sum_result);
            break;

        case 2:  // diff
            get_two_operands_from_console(&operand1, &operand2);
            int diff_result = diff(operand1, operand2);
            printf("%i - %i = %i\n", operand1, operand2, diff_result);
            break;
        
        case 3:  // multiplication
            get_two_operands_from_console(&operand1, &operand2);
            int mult_result = multiply(operand1, operand2);
            printf("%i * %i = %i\n", operand1, operand2, mult_result);
            break;

        case 4:  // division
            get_two_operands_from_console(&operand1, &operand2);
            float div_result = divide(operand1, operand2);
            printf("%i / %i = %f\n", operand1, operand2, div_result);
            break;
        
        case 5:  // factorial
            get_one_operand_from_console(&operand1);
            unsigned long fctr_result = factorial(operand1);
            printf("%i! = %li\n", operand1, fctr_result);
            break;

        case 6:  // square root
            get_one_operand_from_console(&operand1);
            float sqr_result = square_root(operand1);
            printf("sqrt(%i) = %f\n", operand1, sqr_result);
            break;

        case 7:
            printf("Exit loop.\n");
            exit = true;
            break;
        
        default:
            printf("Error! Unknown operator index, available: 1-7.\n");
            return 1;
        }

        printf("\n-------------------------------------------\n");
    }

    return 0;
}
