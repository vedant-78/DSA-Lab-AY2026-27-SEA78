
#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[20];
    char phone[15];
};

int main()
{
    struct Contact c[10], temp;
    int n, i, j;
    int found;
    int low, high, mid;
    char key[20];

    printf("Enter number of records: ");
    scanf("%d", &n);

    // Input contact details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", c[i].name);

        printf("Enter contact: ");
        scanf("%s", c[i].phone);
    }
    // Display
    printf("\nName\t\tContact\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", c[i].name, c[i].phone);
    }
    // Search name
    printf("\nEnter name to search: ");
    scanf("%s", key);

    // ---------------- SEQUENTIAL SEARCH ----------------
    found = 0;

    for(i = 0; i < n; i++)
    {
        if(strcmp(key, c[i].name) == 0)
        {
            printf("\nSequential Search:");
            printf("\nContact found: %s\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nSequential Search:");
        printf("\nContact not found\n");
    }
// Sorting contacts by name for Binary Search
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(c[j].name, c[j + 1].name) > 0)
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    // ---------------- BINARY SEARCH ----------------
    found = 0;
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(key, c[mid].name) == 0)
        {
            printf("\nBinary Search:");
            printf("\nContact found: %s\n", c[mid].phone);
            found = 1;
            break;
        }
        else if(strcmp(key, c[mid].name) < 0)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("\nBinary Search:");
        printf("\nContact not found\n");
    }

    return 0;
}


