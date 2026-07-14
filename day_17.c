//Q65 to merge array 

#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged Array:\n");

    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}


//Q66 to union of array

#include <stdio.h>

int main()
{
    int a[50], b[50];
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Union:\n");

    for(i = 0; i < n1; i++)
        printf("%d ", a[i]);

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("%d ", b[i]);
    }

    return 0;
}

//Q67 to intersection of array

#include <stdio.h>

int main()
{
    int a[50], b[50];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}


//Q68 to find common element

#include <stdio.h>

int main()
{
    int a[50], b[50];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common Elements:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}