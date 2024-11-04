#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1); 
}

int main(void) {
    int n;
    printf("please enter number less than 50 to calculate the factorial: ");
    do{
    scanf("%d", &n);

    if (n < 0) {
        printf("please enter a POSITIVE number less than 50.\n");

    }
    }while(n<0);
    printf("%d! = %d\n", n, factorial(n));

}

