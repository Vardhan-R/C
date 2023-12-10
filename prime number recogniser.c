#include <stdio.h>

int main() {
    int n, i, c;
    while (1) {
        printf("Enter a natural number: ");
        scanf("%d", &n);

        if (n == 1)
            printf("%d is not a prime number.\n", n);
        else {
            c = 0;
            for (i = 2; i < n; i++) {
                if (!(n % i)) {
                    c = 1;
                    break;
                }
            }
            if (c)
                printf("%d is not a prime number.\n", n);
            else {
                printf("%d is a prime number.\n", n);
            }
        }
    }
    return 0;
}
