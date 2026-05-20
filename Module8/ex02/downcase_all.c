#include <stdio.h>
#include <ctype.h>

char* downcase_it(char *str);

int main(int argc, char *argv[])
{
    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc -1;

    if (total_parameters == 0)
    {
        printf("none\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        char *user_input = argv[i];
        printf("%s\n", downcase_it(user_input));
    }
    
    return 0;
}

char* downcase_it(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }

    return str;
}

