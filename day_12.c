#include <stdio.h> //Q45  function for palindrome

int palindrome(int n)
{
    int rev = 0, temp = n;

    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return rev == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}



//q46 write function for armstrong 


#include <stdio.h>

int armstrong(int n)
{
    int temp = n, rem, sum = 0;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

//Q47 write function for fibonacci

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}


//Q48 write functin for perfect number
#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}