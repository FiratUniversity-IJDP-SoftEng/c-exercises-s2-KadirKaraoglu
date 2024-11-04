#include <stdio.h>

int main() {
    int k = 5;

    for (int i = 1; i <= k; i++) {
        for (int j = i; j < k; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = k - 1; i >= 1; i--) {
        for (int j = k; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }


}