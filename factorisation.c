#include <stdio.h>

int main() {
    unsigned int n;

    printf("Enter a natural number: ");
    scanf("%u", &n);

    for (unsigned int i = 1; i <= n; i++) {
        n % i ? printf("") : printf("%u ", i);
    }

    return 0;
}
