#include<stdio.h>
int main() {
    int n, i, j, k;
    scanf_s("%d,", &n);
    for (i = 1; i <= n; i++) {
        k = n - i;
        for (j = 1; j <= k; j++) {
            printf(" ");
        }

        for (j = 1; j <= n - k; j++) {
            printf("*", j);
        }

        for (j = n - k - 1; j >= 1; j--) {
            printf("*", j);
        }
        printf("\n");
    }
    return 0;
}