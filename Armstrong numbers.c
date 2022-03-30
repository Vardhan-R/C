#include <stdio.h>
#include <math.h>

int pwr(double n, int p) {
    double x = 1;
    for (int i = 0; i < p; i++) {
        x *= n;
    }
    return x;
}

bool checkArmstrong(int n_0) {
    int n, i, prev_sum, sum = 0;

    for (i = 0; sum < n_0; i++) {
        prev_sum = sum;
        sum = 0;
        n = n_0;
        while (n != 0) { // skipped for 0, so this program works for zero.
            sum += pwr(n % 10, i);
            n /= 10;
        }
        if (sum == prev_sum)
            break;
    }

    if (sum == n_0)
        return true;
    else
        return false;
}

int main() {
    int lb, ub;

    printf("Enter a natural number: ");
    scanf("%d", &lb);
    printf("Enter a larger natural number: ");
    scanf("%d", &ub);

    for (int i = lb; i <= ub; i++) {
        checkArmstrong(i) ? printf("%d\n", i) : printf("");
    }

    return 0;
}
