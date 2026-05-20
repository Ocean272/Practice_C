#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// int main (int argc, char *argv[])
// {
//     if (argc != 3)
//     {
//         printf("none\n");
//         return 1;
//     }

//     int repetition_count = 0;

//     if (strcmp(argv[1], argv[2]) == 0)
//     {
//         repetition_count = 1;
//     }
//     printf("%d\n", repetition_count);

//     return 0;
// }



//================ Method to find repeated words ===============//

#define MAX_WORDS 100

int main(int argc, char *argv[]) 
{
    if (argc != 3)
    {
        printf("none\n");
        return 1;
    }

    char sentence1[500];
    char sentence2[500];
    strcpy(sentence1, argv[1]);
    strcpy(sentence2, argv[2]);

    char *words1[MAX_WORDS];
    int word_count1 = 0;

    // 1. Gather all words from sentence1
    char *token = strtok(sentence1, " ,.!?");
    while (token != NULL && word_count1 < MAX_WORDS)
    {
            words1[word_count1] = token;
            word_count1++;
            token = strtok(NULL, " ,.!?");
    }
    // printf("Matching words found: ");
    // bool found_match = false;

    int repetition_count = 0; // Our clean counter variable

    // 2. Step through sentence 2 and check for duplicates
    token = strtok(sentence2, " ,.!?");
    while (token != NULL)
    {
        for (int i = 0; i < word_count1; i++)
        {
            if (strcmp(token, words1[i])== 0)
            {
                // printf("%s", token);
                // found_match = true;
                repetition_count++; // Found a match! Increment the counter.
                break;
            }
        }
        token = strtok(NULL, " ,.!?");
    }
    printf("%d\n", repetition_count);

    return 0;
}