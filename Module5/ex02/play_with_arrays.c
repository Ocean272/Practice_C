#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *my_array[] = {"2", "8", "9", "48", "8", "22", "-12", "2"};
 
    int size = sizeof(my_array) / sizeof(my_array[0]);

    printf("[");

    for (int i = 0; i < size; i++)
    {
        printf("%s ", my_array[i]);

        if (i < size -1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    printf("[");

    int printed_count = 0; // Tracks actual numbers printed

    for (int i = 0; i < size; i++)
    {
        int new_array = atoi(my_array[i]);

        if (new_array > 5)
        {   
            // If this isn't the very first number we are printing, drop a comma space first!
            if (printed_count > 0) 
            {
                printf(", ");
            }
            printf("%i", new_array + 2);
            printed_count++; // increment our printed tracker
        }
    }
    printf("]");

    return 0;
}
    