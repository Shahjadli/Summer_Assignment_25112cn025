#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}



// #include <stdio.h>

// Recursive function to find Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() //recursive fibonacci series
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


#include <stdio.h>// rercursive sum of number

// Recursive function to find sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));

    return 0;
}



#include <stdio.h> // recursive reverse  number

int reverse = 0;

// Recursive function to reverse a number
void reverseNumber(int n)
{
    if (n == 0)
        return;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverseNumber(num);

    printf("Reversed number = %d\n", reverse);

    return 0;
}