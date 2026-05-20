#include <stdio.h>

int main()
{

    // // 1)  For loops

    // int i, j;

    // for (i = 0; i <= 10; i++)
    // {
    //     printf("Table of %d : ", i);
    
    //     for(j = 0; j <= 10; ++j)
    //     {
    //         printf("%d ", i * j);
    //     }
    //     printf("\n");
        
    // }
    //=======================================================//


    // // 2) While loops

    int i = 0, j;

    while (i <= 10)
    {
        j = 0;

        printf("Table of %d : ", i);
        
        while (j <= 10){
            printf("%d ", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}