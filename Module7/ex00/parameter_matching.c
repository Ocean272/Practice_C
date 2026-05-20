#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("none\n");
        return 1;
    }

    char word1[100];
    strcpy(word1,  argv[1]);


    char input[100];
    printf("What was the parameter: ");
    fgets(input, sizeof(input), stdin);


    // This line finds the '\n' and replaces it with '\0'
    // (null terminator)
    input[strcspn(input, "\n")] = '\0';

    if(strcmp(word1, input) == 0)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Nope, sorry...\n");
    }
    return 0;
}