#include <ctype.h>
#include <stdio.h>
#include <string.h>

char* shrink(char *str);
char* enlarge(char *str);

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
        char *text = argv[i];
        // printf("%s", text);
        int letters_printed = strlen(text);

        char buffer[50];
        strcpy(buffer, text);
        
        if (letters_printed > 8)
        {
            printf("%s ", shrink(buffer));
        }
        else
        { 
            printf("%s ", enlarge(buffer));
        }
     }
    printf("\n");
    return 0;
}

char* shrink(char *str)
{
        str[8] = '\0';

    return str;
}


char* enlarge(char *str)
{
    int long_word = strlen(str);

    for (int j = long_word; j < 8; j++)
    {
        str[j] = 'Z'; 
    }  
    str[8] = '\0';
    return str;
}


