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
        printf("%s\n", argv[1]);
    }

    return 0;
}