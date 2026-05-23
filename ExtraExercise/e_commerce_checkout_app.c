#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_COUNT 100

struct PriceDetails
{
    char cost[50];
    char currency[50];
};

struct CartItem
{
    char name[50];
    char category[50];
    struct PriceDetails price;
};

float process_electronics(struct CartItem *e, int total, char output[][100]);

int main()
{
    struct CartItem items[] = {
    {"Laptop",    "Electronics", {"1200", "USD"}},
    {"Shoes",     "Apparel",     {"85",   "USD"}},
    {"Smartphone","Electronics", {"800",  "USD"}},
    {"Book",      "Media",       {"15",   "USD"}},
    {"Headphones","Electronics", {"150",  "USD"}}
    };

    int total_elements = sizeof(items) / sizeof(items[0]);
    char name_canvas[MAX_COUNT][100];

    int printed_count = 0;

    for(int i = 0; i < MAX_COUNT; i++) name_canvas[i][0] = '\0';

    float subtotal = process_electronics(items, total_elements, name_canvas);

    printf("--- Premium Checkout Summary ---\n");

    printf("Filtered Items :[");

    for (int i = 0; i < total_elements; i++)
    {
        if (strlen(name_canvas[i]) > 0)
        {
            if (printed_count > 0)
            {
                printf(", ");
            }
            printf("%s", name_canvas[i]);
            printed_count++;
        }
    }
    printf("]\n");

    printf("Electronics Subtotal: $%.2f.\n", subtotal);

    return 0;
}

float process_electronics(struct CartItem *e, int total, char output[][100])
{
    int matches_found = 0;
    float sum = 0;
    for (int i = 0; i < total; i++)
    {
        char *name = e[i].name;
        char *currency = e[i].price.currency;
        char *category = e[i].category;

        if (strcmp(category, "Electronics")== 0)
        {
            float num = atoi(e[i].price.cost);
            sum += num;

            sprintf(output[matches_found], "%s (%s) ", name, currency);
            matches_found++;

        }
        
    }
    return sum;
}