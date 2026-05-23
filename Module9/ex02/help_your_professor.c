#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_COUNT 40

struct Classes 
{
    char name[50];
    char grade[50];
};

void average(struct Classes *e, int total, char *class_name);

int main()
{
    struct Classes class_3B[] = 
    {
        {"marine", "18"},
        {"jean", "15"},
        {"coline", "8"},
        {"luc", "9"}
    };
   
    struct Classes class_3C[] 
    {
        {"quentine", "17"},
        {"julie", "15"},
        {"marc", "8"},
        {"stephanie", "13"}
    };
 
    int printed_count = 0;

    int total_elements1 = sizeof(class_3B) / sizeof(class_3B[0]);
    int total_elements2 = sizeof(class_3C) / sizeof(class_3C[0]);

    average(class_3B, total_elements1, "class 3B");
    average(class_3C, total_elements2, "class 3C");
    
    return 0;
}

void average(struct Classes *e, int total, char *class_name)
{   
    float sum = 0;
    for (int i = 0; i < total; i++)
    {
        float num = atoi(e[i].grade);
        sum += num; 
    }

    float average = sum / (float)total;
     
    printf("Average for %s: %g.\n", class_name, average);
}