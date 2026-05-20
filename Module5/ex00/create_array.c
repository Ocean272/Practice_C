#include <stdio.h>

int main()
{
    char *my_array[] = {"2", "8", "9", "48", "8", "22", "-12", "2"};
 
    int size = sizeof(my_array) / sizeof(my_array[0]);

    
    printf("[");

    for (int i = 0; i < size; i++)
    {
        printf("%s", my_array[i]);

        if (i < size -1)
        {
            printf(", ");
        }
        
    }
    printf("]");

    return 0;
}
    