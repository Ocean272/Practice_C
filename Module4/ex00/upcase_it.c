#include <ctype.h>
#include <stdio.h>

int main()
{
    char input[50];
    int i = 0;

    printf("Give me a word: ");
    fgets(input, sizeof(input), stdin);


    while(input[i])
    {
        input[i] = toupper((unsigned char)input[i]);
        i++;
    }
    printf("%s\n", input);
    return 0;
} 