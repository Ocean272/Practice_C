#include <stdio.h>
#include <ctype.h>

char* upcase_it(char *str);

int main()
{   
    char test_string[] = "hello";
    printf("%s\n",upcase_it(test_string));
    return 0;
}

char* upcase_it(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
    return str;
}