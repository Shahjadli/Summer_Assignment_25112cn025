//69 bubble sort

#include <stdio.h>  

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

//Q70 selection sort

#include <stdio.h>

int main()
{
    int a[100], n, i, j, min, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

//Q71  binary search 

#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}

//Q72 sort array in decreasing order

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in Descending Order:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}