#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "C is awesome";

    char input[50];
    printf("");
    fgets(input, sizeof(input), stdin);


    // This line finds the '\n' and replaces it with '\0'
    // (null terminator)
    input[strcspn(input, "\n")] = '\0';

    if(strcmp(input, password) == 0)
    {
        printf("ACCESS GRANTED\n");
    }
    else
    {
        printf("ACCESS DENIED\n");
    }
    return 0;
}

