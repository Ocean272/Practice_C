#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Give me a number: ");
    scanf("%lf", &num);
    
    int result = ceil(num);

    printf("%d\n", (int)result);
    
    return 0;
}