#include <stdio.h>

int main(int argc, char *argv[])
{

    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc -1;

    if (total_parameters == 0)
    {
        printf("Number of parameters : 0.\n");
    }
    else
    {
        printf("Number of parameters : %i.\n", total_parameters);
    }
    return 0;
}