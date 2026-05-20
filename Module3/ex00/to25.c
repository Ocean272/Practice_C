#include <stdio.h>

int main()
{
    int input;
    printf("Enter a number less than 25\n");
    scanf("%d", &input);

    int i = input;
    if (input >= 26)
    {
        printf("Error");
    }
    else
    {
        while (i <= 25)
        {
            printf("Inside the loop, my variable is %d\n", i);
            i++;
        }
    }

    return 0;
}