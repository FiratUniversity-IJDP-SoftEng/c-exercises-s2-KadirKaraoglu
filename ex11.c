
#include <stdio.h>

int main() {
    int size = 5;
    for (int a = 0; a < size; a++) {

    for (int k = 0; k < size; k++) {

    if (k == a || k == (size - a - 1))
    {
                printf("*");
    } else {
                printf(" ");
    }
    }
        printf("\n");
    }
}
