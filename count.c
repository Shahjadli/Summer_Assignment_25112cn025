#include <stdio.h>

int main() {
    int n, count = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // count digits using for loop
    for(i = n; i != 0; i = i / 10) {
        count++;
    }

    printf("Total digits = %d", count);

    return 0;
}