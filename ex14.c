#include <stdio.h>

int fibonacci(int k) {
    if (k == 0) {
        return 0;
    }
    if (k == 1) {
        return 1;
    }
    return fibonacci(k - 1) + fibonacci(k - 2);
}

int main(void) {
    int k;
    printf("Enter a positive integer to calculate the Fibonacci number : ");
    do{
    scanf("%d", & k);
        if (k<0){
            printf("please enter positive number ");
        }
    }while(k<0);
     printf("Fibonacci series: ");
    for(int i=0;i<k;i++){
        printf("%d ,", fibonacci(i));
        
    }
    printf("%d ", fibonacci(k));
    printf("\n");

    printf("The result : %d\n", fibonacci(k));
}


