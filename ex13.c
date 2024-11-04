#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1); 
}

int main(void) {
    int n;
    printf("please enter positive number : ");
    do{
    scanf("%d", &n);

    if (n < 0) {
        printf("factorial is not defined in negative numbers \nplease enter pozitive number.\n");

    }
    }while(n<0);
    printf("%d! = %d\n", n, factorial(n));

}

