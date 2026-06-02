#include <stdio.h>  //Q1 to check prime number

int main()
{
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        flag = 0;
    else
    {
        for(i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}



//Q2  to print prime number in a range.

#include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", i);
    }

    return 0;
}


//Q3 to find GDC of two number.

#include <stdio.h>

int main()
{
    int a, b, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);

    return 0;
}



//Q4 to find LCM of two number.

#include <stdio.h>

int main()
{
    int a, b, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM = %d", lcm);

    return 0;
}

