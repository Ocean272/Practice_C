#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Give me a number: ");

    
    // This 'if' is to validate the input, it returns 1 if successful.
    if(scanf("%lf", &num) == 1) 
    {
        // This second 'if' is to compare the original number to the chopped-off version of itself.
        // Putting (int) in front of a double tell C to "truncate" the number, which means to literally
        // throw away everything after the decimal point.
        if(num == (int)num)
        {
            printf("This number is an integer.\n");
        }
        else
        {
            printf("This number is a decimal.\n");
        }
    }
    return 0;
}