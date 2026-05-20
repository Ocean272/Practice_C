#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("none\n");
        return 1;
    }

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    printf("[");

    for (int i = start; i <= end; i++)
    {
        printf("%d", i);

        if (i < end)
        {
            printf(", ");
        }
    }
    printf("]");

    printf("\n");
   

    return 0;
}