#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number \n");
    scanf("%d", &input);

    int i = 0;

        while (i <= 9)
        {
            printf("%d x %d = %d\n", i , input, i * input);
            i++;
        }

    return 0;
}