#include <stdio.h>

int main()
{
    int is_zero;
    printf("");
    scanf("%d", &is_zero);

    if(is_zero > 0)
    {
        printf("This number is different from zero.");
    }
    else
    {
        printf("This number is equal to zero.");
    }
    return 0;
}