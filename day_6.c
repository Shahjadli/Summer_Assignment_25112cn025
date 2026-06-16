#include <stdio.h>  //to convert decimall to binary 

int main()
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}


// convert binary to decimal number

#include <stdio.h>
#include <math.h>

int main()
{
    int binary, decimal = 0, rem, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal = %d", decimal);

    return 0;
}


//to count set bit in his number


#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}


 #include <stdio.h>  //to find x^n without pow()

int main()
{
    int x, n, result = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}