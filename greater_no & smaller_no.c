#include<stdio.h>

void main() {
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is the greatest number\n", a);
    } else if (b > a) {
        printf("%d is the smallest number\n", b);
    } else {
        printf("%d and %d are equal numbers\n", a, b);
    }
}

