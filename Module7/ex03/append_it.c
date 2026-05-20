#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        char *word = argv[i];
        size_t len = strlen(word);

        if (len >= 3 && strcmp(word + len - 3, "ism") == 0)
        {
            
            // printf("Deleting word: %s\n", word);
            continue;
        }

        size_t new_len = len + 4;
        char *new_word  = malloc(new_len); // Memory allocation

        if (new_word == NULL)
        {   
            fprintf(stderr, "Fatal: Memory allocation failed\n");
            return 1;
        }

        snprintf(new_word, new_len, "%sism", word);
        printf("%s\n", new_word);

        free(new_word);
    }

    return 0;
}