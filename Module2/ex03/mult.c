#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the first number:\n"); 
    scanf("%d", &num1);

    int num2;
    printf("Enter the second number:\n");
    scanf("%d", &num2);

    int multi_num = num1 * num2;
    printf("%d x %d = %d\n" , num1, num2, multi_num);

    if(multi_num > 0)
    {
        printf("This result is positive.");
    }
    else if(multi_num < 0)
    {
        printf("This result is negative.");
    }
    else
    {
        printf("This result is positive and negative.");
    }
    return 0;
}