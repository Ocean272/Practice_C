#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *my_array[] = {"2", "8", "9", "48", "8", "22", "-12", "2"};
 
    int size = sizeof(my_array) / sizeof(my_array[0]);

    printf("Original array: [");

    for (int i = 0; i < size; i++)
    {
        printf("%s ", my_array[i]);

        if (i < size -1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    printf("New array: [");

    for (int i = 0; i < size; i++)
    {
        int new_array = atoi(my_array[i]);

        printf(" %i", new_array + 2);

        if (i < size -1)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}
    