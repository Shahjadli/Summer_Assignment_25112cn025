//   check perfect number  


#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        printf("%d is a Perfect Number.", n);
    }
    else
    {
        printf("%d is not a Perfect Number.", n);
    }

    return 0;
}
 


#include <stdio.h> // t0  check strong number

int main()
{
    int n, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
    {
        printf("%d is a Strong Number.", n);
    }
    else
    {
        printf("%d is not a Strong Number.", n);
    }

    return 0;
}


// to check factor of a number

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}


//to find largest prime  factor


#include <stdio.h>

int main()
{
    int n, i, j, isPrime, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 1;

            for(j = 2; j <= i / 2; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1)
            {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}
