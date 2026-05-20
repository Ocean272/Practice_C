#include <stdio.h>

int main()
{
    int age;
    printf("Please tell me your age: ");
    scanf("%i", &age);
    
    printf("Your are currently %i years old.\n", age);
    printf("In 10 years, you'll be %i years old.\n", age + 10);
    printf("In 10 years, you'll be %i years old.\n", age + 20);
    printf("In 10 years, you'll be %i years old.\n", age + 30);

    return 0;
}