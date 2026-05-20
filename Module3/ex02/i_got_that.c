#include <stdio.h>
#include <string.h>


int main() 
{
    char user_input[100];
    printf("What you gotta say? ");
    scanf("%s", &user_input);

    if (strcmp(user_input, "STOP") == 0)
    {
        return 0;
    }

    while (true) 
    {
        fgets(user_input, sizeof(user_input), stdin);
        user_input[strcspn(user_input, "\n")] = '\0';

        if (strcmp(user_input, "STOP") == 0)
        {
            break;
        }
        
        printf("I got it! Anything else? : ");    
    }

    return 0;
}