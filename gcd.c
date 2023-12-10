#include <ctype.h>
#include <stdio.h>

int gcd(int a, int b) {
    if (a > b) {
        int n = a % b;
        if (n == 0) {
            return b;
        }
        else {
            return gcd(b, n);
        }
    }
    else {
        int n = b % a;
        if (n == 0) {
            return a;
        }
        else {
            return gcd(a, n);
        }
    }
}

int main() {
    int a, b;

    printf("Enter a natural number: ");
    scanf("%d", &a);
    printf("Enter another natural number: ");
    scanf("%d", &b);

    printf("%d", gcd(a, b));

    return 0;
}
