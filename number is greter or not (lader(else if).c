#include<stdio.h>

void main(){
    int a, b, c;
    printf("Enter the numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c){
        printf("%d is the smallest\n", a);
    }
    else if(b < a && b < c){
        printf("%d is the smallest\n", b);
    }
    else if(c < a && c < b){
        printf("%d is the smallest\n", c);
    }
    else if(c == a && c < b)
	  {
        printf("%d is equal to %d\n", c, a);
    }
     else if(a == b && b < c)
	  {
        printf("%d is equal to %d\n", b, a);
        
    } else if(c == b && c < b)
	  {
        printf("%d is equal to %d\n", b, c);
    }
    else{
        printf("All are equal\n");
    }
}

