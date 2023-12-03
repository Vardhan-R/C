#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void updatePipes(int* p_arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(p_arr + 3 * i + j) = *(p_arr + 3 * i + j + 1);
        }
    }
    *(p_arr + 9) = 480;
    *(p_arr + 10) = 70;
    *(p_arr + 11) = 90;
}

// void func(int a[], int l) {
//     printf("%d\n", sizeof(a) / sizeof(a[0]));
// }

bool ispalindrome(int n){

    if (n && !(n % 10)) {
        return false;
    } else {
        int n_copy = n, d = 0, pwr = 1, n_rev = 0;

        while (n) {
            d += 1;
            n /= 10;
        }

        for (int i = 0; i < d; i++) {
            pwr *= 10;
        }

        n = n_copy;

        for (int i = 0; i < d; i++) {
            pwr /= 10;
            n_rev += n % 10 * pwr;
            n /= 10;
        }

        return n_copy == n_rev;
    }
}

int main() {
    // int a[3][2], b[2] = {15, 13};
    // a[0][0] = a[0][1] = 27 / 2;

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("%d", -1 % 6);

    // int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // updatePipes(&a[0][0]);

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 5; i++) {
    //     printf("Outside: %d\n", i);
    //     func();
    // }

    // int n = 91;
    // int a[5] = {n, 2, 7, 2, 3};

    // printf("%p", a[0]);

    // printf("%d", ispalindrome(55));

    // int a = 93;
    // int* p = NULL;
    // printf("%p\n", p);
    // printf("%d", *p);

    // int a[] = {5, 6, 7};
    // int *ptr = a;
    // char a[] = "abcdeshuer";
    // char *ptr = strrev(a);

    // func(a, sizeof(a));

    // *(a + 1) = 'k';

    // printf("%c\n", *(a + 1));

    int n = 5;

    for (int i = -1; i < n; i++) {
        int x = i;
        printf("%d\n", x);
        x = ++x % n;
        printf("%d\n\n", x);
        // printf("%d\n", x);
        // printf("\n");
    }

    return 0;
}