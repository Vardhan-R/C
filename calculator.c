#include <stdio.h>

int main() {
    double a, b;
    char o;

    printf("Enter a real number: ");
    scanf("%lf", &a);
    do {
        printf("Enter an operator (\"+\", \"-\", \"*\", \"/\"): ");
        scanf(" %c", &o);
    } while (o != '+' and o != '-' and o != '*' and o != '/');
    printf("Enter another real number: ");
    scanf("%lf", &b);

    if (o == '+')
        printf("%lf", a + b);
    else if (o == '-')
        printf("%lf", a - b);
    else if (o == '*')
        printf("%lf", a * b);
    else
        printf("%lf", a / b);

    return 0;
}
