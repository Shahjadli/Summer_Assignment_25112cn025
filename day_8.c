#include<stdio.h>

int main() // Q29  TO Print half pyramid pattern
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

 //Q30  number traingle 
    #include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);

        printf("\n");
    }

    return 0;
}

//Q31  character traingle

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c",'A'+j-1);

        printf("\n");
    }

    return 0;
}

#include<stdio.h> //Q32 repeated number

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",i);

        printf("\n");
    }

    return 0;
}