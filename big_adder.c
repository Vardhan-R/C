#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char a[MAX_LENGTH], b[MAX_LENGTH];

    printf("First integer: ");
    gets(a);
    printf("Second integer: ");
    gets(b);

    int a_len = strlen(a), b_len = strlen(b);
    char *a_rev = strrev(a);
    char *b_rev = strrev(b);

    int max_len = a_len < b_len ? b_len : a_len, min_len = a_len < b_len ? a_len : b_len;
    if (a_len < b_len) {
        for (int i = a_len; i < b_len; i++) {
            *(a_rev + i) = '0';
        }
    } else {
        for (int i = b_len; i < a_len; i++) {
            *(b_rev + i) = '0';
        }
    }

    int c[MAX_LENGTH + 1];
    c[0] = 0;
    for (int i = 0; i < max_len; i++) {
        int temp = (int) a[i] + (int) b[i] - 96;
        c[i] += temp % 10;
        c[i + 1] = temp / 10;
    }

    if (c[max_len]) {
        printf("%d", c[max_len]);
    }
    for (int i = max_len - 1; i >= 0; i--) {
        printf("%d", c[i]);
    }

    printf("\n");

    return 0;
}