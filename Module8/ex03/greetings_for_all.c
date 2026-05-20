#include <stdio.h>
#include <ctype.h>

char* greetings(char *str);

int main(int argc, char *argv[])
{    
    // Subtract 1 because argv[0] is always the program's file name
    int total_parameters = argc -1;

    if (total_parameters == 0)
    {
        printf("Hello, noble stranger.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        char *user_input = argv[i];
        if (!isdigit((unsigned char)user_input[0]))
        {
            printf("Hello, %s\n", greetings(user_input));
        }
        else
        {
            printf("Error! It was not a name.\n");
        }
    }
    
    return 0;
}


char* greetings(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = (unsigned char)str[i];
        i++;
    }

    return str;
}

