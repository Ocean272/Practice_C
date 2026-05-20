#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc - 1;

    if (total_parameters == 0) 
    { 
        printf("none\n");
    } 
    else 
    {
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            printf("%c", tolower(argv[1][i]));
        }
        printf("\n");
    }
    return 0;
}