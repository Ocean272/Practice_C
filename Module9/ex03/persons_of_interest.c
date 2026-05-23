#include <stdio.h>
#include <string.h>

#define MAX_COUNT 50

struct BioData
{
    char name[100];
    char date_of_birth[5];
};

struct Historic_figures
{
    char key_id[50];
    struct BioData profile;
};

void famous_births(struct Historic_figures *e, int total, char output[][100]);

int main()
{
    struct Historic_figures women_scientists[] = 
    {
        {"ada", {"Ada Lovelace","1815"}},
        {"cecilia", {"Cecila Payne", "1900"}},
        {"lise", {"Lise Meitner", "1878"}},
        {"grace", {"Grace Hopper", "1906"}}
    };

    int element_size = sizeof(women_scientists) / sizeof(women_scientists[0]);

    char name_canvas[MAX_COUNT][100];
    for (int i = 0; i < MAX_COUNT; i++) name_canvas[i][0] = '\0';

    famous_births(women_scientists, element_size, name_canvas);

    // int printed_count = 0;

    return 0;
}

void famous_births(struct Historic_figures *e, int total, char output[][100])
{
    struct Historic_figures temp;
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            char *year1 = e[j].profile.date_of_birth;
            char *year2 = e[j + 1].profile.date_of_birth;

            if (strcmp(year1, year2) > 0)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < total; i++)
    {
        printf("%s is a great scientist born in %s.\n", e[i].profile.name , e[i].profile.date_of_birth);
    }
}