#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function to check if a number is already in our "set"
bool contains(int set[], int size, int element) 
{
    for (int i = 0; i < size; i++) 
    {
        if (set[i] == element) return true; // Found a duplicate!
    }
    return false;
}

int main() 
{
    int my_set[MAX_SIZE];
    int set_size = 0;
    
    char *my_array[] = {"2", "8", "9", "48", "8", "22", "-12", "2"}; // Contains duplicates
    int size = sizeof(my_array) / sizeof(my_array[0]);
    
    int final_array;
    int printed_count = 0;

//========================== Original array =======================//
    printf("[");

    for (int i = 0; i < size; i++)
    {
        printf("%s", my_array[i]);

        if (i < size -1)
        {
            printf(", ");
        }
    }
    printf("]\n");

//========================== Second array =======================//

    printf("{");
    for (int i = 0; i < size; i++) 
    {   
        int new_array = atoi(my_array[i]);
        // Only add the item if it's not already in the array
        if (!contains(my_set, set_size, new_array)) 
        {
            my_set[set_size] = new_array;
            set_size++;
        }
    }

    for (int i = 0; i < set_size; i++) 
    {
        final_array = my_set[i];
        if (final_array > 5)
        {
            if (printed_count > 0)
            {
                printf(", ");
            }
            printf("%i", final_array + 2);
            printed_count++;
        }
    }
    printf("}");
    return 0;
}
