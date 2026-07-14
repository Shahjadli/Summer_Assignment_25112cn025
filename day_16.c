//Q61 find missing array in array
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, total;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
} 

//Q62 to find maximum frequency element

#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxCount = 0, count, element;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);
    printf("\nFrequency = %d", maxCount);

    return 0;
}

//Q63 to find pair with given sum

#include <stdio.h>

int main()
{
    int a[100], n, i, j, sum;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
                printf("%d %d\n", a[i], a[j]);
        }
    }

    return 0;
}


//Q64 to remove dublicate from array

#include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n;)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
            }
            else
                j++;
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}