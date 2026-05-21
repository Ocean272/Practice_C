#include <ctype.h>
#include <stdio.h>
#include <string.h>

void array_of_names(char *first[], char *last[], int total, char output[][100]);

int main(void)
{
    char *first_name[] = {"jean", "grace", "xavier", "fifi"};
    char *last_name[] = {"valjean", "hopper", "niel", "brindacier"};

    int total_elements  = sizeof(first_name) / sizeof(first_name[0]);

    char full_names_canvas[4][100];

    array_of_names(first_name, last_name, total_elements, full_names_canvas);

    printf("[");
    for (int i = 0; i < total_elements; i++)
    {
        printf("'%s'%s", full_names_canvas[i], (i < total_elements - 1) ? ", " : "" );
    }
    printf("]\n");

    return 0;
}

void array_of_names(char *first[], char *last[], int total, char output[][100])
{
    for(int i = 0 ; i < total; i++)
    {
        // isolate the current string
        char *fn = first[i];
        char *ln = last[i];

        sprintf(output[i],"%c%s %c%s",
              toupper(fn[0]), &fn[1],
              toupper(ln[0]), &ln[1]);
    }
}