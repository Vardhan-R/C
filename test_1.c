#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (!(n % i))
            return false;
    }
    return true;
}

void main() {
    // printf("Hello");
    for (int i = 2; i < 50; i++) {
        if (isPrime(i))
            printf("%c ", i);
    }
}