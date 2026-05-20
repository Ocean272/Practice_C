#include <stdio.h>

int main()
{
    int num1;
    printf("Give me the first number: ");
    scanf("%d", &num1);

    int num2;
    printf("Give me the second number: ");
    scanf("%d", &num2);

    printf("Thank you!\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    return 0;
}