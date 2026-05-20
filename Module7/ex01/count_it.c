#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

int main(int argc, char *argv[])
{

    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc -1;

    if (total_parameters == 0)
    {
        printf("none\n");
    }
    else
    {
        printf("Number of parameters : %i.\n", total_parameters);
    }


    for (int i = 1; i < argc; i++)
    {
        int word_length = strlen(argv[i]);
        printf("%s: %d\n", argv[i], word_length);
    }
   
    return 0;
}