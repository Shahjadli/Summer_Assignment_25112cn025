#include<stdio.h>
int main ()
{ 
    int n;
    int sum=0;

    printf ("enter your number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    printf("sum=%d",sum);


return 0;
}
