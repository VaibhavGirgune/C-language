#include <stdio.h>

void main() {
    int v;
    printf("Enter a number: ");
    scanf("%d", &v);

    if (v <= 0) {
        printf("This is a non-positive number.\n");
    } else {
        printf("This is a positive number.\n");
    }

  
}


