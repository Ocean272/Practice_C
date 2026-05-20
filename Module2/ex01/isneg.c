#include <stdio.h>

int main()
{
    int is_neg;
    printf("");
    scanf("%d", &is_neg);

    if(is_neg > 0)
    {
        printf("This number is positive.");
    }
    else if(is_neg < 0)
    {
        printf("This number is negative.");
    }
    else
    {
        printf("This number is both positive and negative.");
    }
    return 0;
}