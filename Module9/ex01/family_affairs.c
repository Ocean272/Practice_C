#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_COUNT 100

struct Entry 
{
    char name[50];
    char color[50];
};

void find_the_redheads(struct Entry *e, int total, char output[][100]);

int main()
{
    struct Entry dupont_family[] = {
        
    {"florian", "red"},
    {"marie", "blond"},
    {"virginie", "brunette"},
    {"david", "red"},
    {"franck", "red"} 
    };
    int total_elements = sizeof(dupont_family) / sizeof(dupont_family[0]);
    char name_canvas[MAX_COUNT][100];

    for(int i = 0; i < MAX_COUNT; i++) name_canvas[i][0] = '\0';

    find_the_redheads(dupont_family, total_elements, name_canvas);

    printf("[");

    int printed_count = 0;

    for (int i = 0; i < total_elements; i++) 
    {
        if (strlen(name_canvas[i]) > 0)
        {
            if (printed_count > 0)
            {
                printf(", ");
            }
            printf("'%s'", name_canvas[i]);
            printed_count++;
        }
    }
    printf("]\n");
    return 0;
}


void find_the_redheads(struct Entry *e, int total, char output[][100])
{
    int matched_found = 0;
    for(int i = 0; i < total; i++)
    {
        char* n = e[i].name;
        char *c = e[i].color;
        if (strcmp(c, "red")== 0)
        {
            sprintf(output[matched_found], "%s", n);
            matched_found++;
        }
    }
}