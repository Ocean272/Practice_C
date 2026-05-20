#include <stdio.h>

int main()
{
    char first_name[50];
    printf("Hey, what's your first name? : ");
    scanf("%s", first_name);

    char last_name[50];
    printf("And your last name? : ");
    scanf("%s", last_name);

    printf("Well, pleased to meet you, %s %s.\n", first_name, last_name);
    return 0;
}