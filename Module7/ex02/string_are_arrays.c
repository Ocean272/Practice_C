#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc -1;

    if (total_parameters == 0)
    {
        printf("none\n");
        return 1;
    }

    char target = 'z';
    int found = 0; // Sets the found to true or false in order to printf

    for (int i = 0; i < argv[1][i] != '\0'; i++)
    {
        if(argv[1][i] == target)
        {
            printf("%c", target);
            found = 1;
        }   // else cannot place here for "Not found character"  as
            // it prints out "none" for the whole string. So need a 
            // flipper "int found" in line 16 to regulate printf.
    }

    if (found == 0)
    {
        printf("none");
    }
   
    printf("\n");

    return 0;
}

