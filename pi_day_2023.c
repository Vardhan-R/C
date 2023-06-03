#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float y;
    int n = 10000000, c = 0;
    time_t t_0;

    srand((unsigned) time(&t_0));

    for (int _ = 0; _ < n; _++){
        y = rand() / 10000.0;
        c += floor(y + sin(rand() % 31415 / 10000)) - floor(y);
    }

    printf("%f\n", (float) 2 * n / c);

    return 0;
}