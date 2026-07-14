// Q57 to r=ervers an array
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reversed Array:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}

//Q58 to rotate an array left side
#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    temp = a[0];

    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = temp;

    printf("After Left Rotation:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


//Q59 rotate an array right side

#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    temp = a[n - 1];

    for(i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = temp;

    printf("After Right Rotation:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


//Q60 to moves zeroes to end

#include <stdio.h>

int main()
{
    int a[100], n, i, j = 0, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}