#include <stdio.h>


int main()
{
    char first_name[] = "Authur";
    char last_name[] = "Dent";

    // ==> Important - must declare a memory space big enough to handle both variable.
    char whole_name[50];


    // sprintf function allows to "print" multiple variables into a single array all at once.
    sprintf(whole_name, "%s %s", first_name, last_name);

    printf("%s\n", whole_name);
    return 0;
}