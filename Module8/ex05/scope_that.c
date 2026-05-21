#include <stdio.h>

void add_one(int number_mailbox)
{
   number_mailbox = number_mailbox + 1;
}


int main()
{
     int my_number = 5;

     printf("Before calling the function:\n");
     printf("%d\n", my_number);

     for (int i = 0; i < 30; i++)
     {
         printf("-");
     }
     printf("\n");

     add_one(my_number);

     printf("After calling the function:\n");
     printf("%d\n", my_number);
    
    
    return 0;
}
