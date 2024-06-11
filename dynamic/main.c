#include <stdbool.h>

#include "formatting.h"

int main()
{
    char text_case;
    printf("Choose the case of text you want to get (l - lower, u - upper): ");
    scanf("%c", &text_case);

    switch (text_case)
    {
    case 'l':
        translate_to_lowercase();
        break;

    case 'u':
        translate_to_uppercase();
        break;
    
    default:
        printf("Error! Unknown case of text was received.\n");
        return 1;
    }

    return 0;
}
