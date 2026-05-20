#include <stdio.h>

int main(int argc, char *argv[]) 
{
    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc - 1;

    if (total_parameters < 2) 
    { 
        printf("none\n");
    } 
    else 
    {
        for (int i = total_parameters; i >= 1 ; i--)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}