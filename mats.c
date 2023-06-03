#include <stdio.h>

int main() {
    int m, n, q;
    printf("m: ");
    scanf("%d", m);
    printf("n: ");
    scanf("%d", n);
    printf("q: ");
    scanf("%d", q);
    int mat_1[n][m], mat_2[m][q];

    printf("mat_1 elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat_1[i][j]);
        }

    }

    return 0;
}