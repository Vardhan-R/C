// #include <stdio.h>

// int main() {
//     double a, b;
//     char o;

//     printf("Enter a real number: ");
//     scanf("%lf", &a);
//     do {
//         printf("Enter an operator (\"+\", \"-\", \"*\", \"/\"): ");
//         scanf(" %c", &o);
//     } while (o != '+' and o != '-' and o != '*' and o != '/');
//     printf("Enter another real number: ");
//     scanf("%lf", &b);

//     if (o == '+')
//         printf("%lf", a + b);
//     else if (o == '-')
//         printf("%lf", a - b);
//     else if (o == '*')
//         printf("%lf", a * b);
//     else
//         printf("%lf", a / b);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

void slice(char full_s[], char* s, int lft, int rgt) {
    for (int i = lft; i < rgt; i++) {
        *(s + i - lft) = full_s[i];
    }
}

int func(char s[]) {
    int l = strlen(s);
    int p = l - 1;
    for (int i = l - 1; i >= 0; i--) {
        char lft_s[i + 1], rgt_s[l - i];
        if (s[i] == '+' || s[i] == '-') {
            // printf("%d", i);
            slice(s, &lft_s[0], 0, i);
            slice(s, &rgt_s[0], i + 1, l);
            if (s[i] == '+') {
                printf("%s\n", lft_s);
                printf("%d\n", func(lft_s));
                printf("%s\n", rgt_s);
                printf("%d\n", func(rgt_s));
                return (func(lft_s) + func(rgt_s));
            } else {
                return (func(lft_s) - func(rgt_s));
            }
        } else if (s[i] == '*' || s[i] == '/') {
            slice(s, &lft_s[0], 0, i);
            slice(s, &rgt_s[0], i + 1, l);
            if (s[i] == '*') {
                return (func(lft_s) * func(rgt_s));
            } else {
                return (func(lft_s) / func(rgt_s));
            }
        }
    }
    int pwr = 1, a = 0;
    for (int i = l - 1; i >= 0; i--) {
        a += ((int) s[i] - 48) * pwr;
        pwr *= 10;
    }
    return a;
}

int main() {
    printf("%d", func("7+3"));

    return 0;
}
