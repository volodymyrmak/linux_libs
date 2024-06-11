#include "formatting.h"


void translate_to_uppercase()
{
    char text[MAX_TEXT_SIZE];
    printf("Enter the text: ");
    scanf(" %[^\n]", text);

    for (int i = 0; i < MAX_TEXT_SIZE; ++i)
    {
        if (text[i] == '\0')
        {
            break;
        }

        text[i] = toupper(text[i]);
    }

    printf("Translated text:\n%s\n", text);
}
