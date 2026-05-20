#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char text[4096];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    int letters = 0;

    // Initially was int words = 1 due to missing space at the end. Since implementing in_word flag
    // in the if statement which explicitly start tracking each characters, therefore change to 0 instead.
    int words = 0; 
    int sentences = 0;
    int in_word = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }

        if (isspace(text[i]))
        {
            in_word = 0; // If spacebar is hit, exit from the word.
        }
        else if (in_word == 0)
        {
            in_word = 1; // move on from a space to the next character.
            words++;
        }

        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    //==========Coleman-Liau Index===========//

    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;

    float index = (0.0588 * L) - (0.296 * S) - 15.8;

    int finalGrade = (int) round(index);

    if (finalGrade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (finalGrade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", finalGrade);
    }
    return 0;
}