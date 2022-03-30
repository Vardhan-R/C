#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1;
    printf("How many Fibonacci numbers? ");
    scanf("%d", &n);
    printf("The first %d Fibonacci numbers are", n);
    for (i = 0; i < n; i++) {
        printf("\n%d", a);
        b += a;
        a = b - a;
    }
    return 0;
}
