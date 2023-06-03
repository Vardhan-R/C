#include <stdio.h>
#include <string.h>

void extractClr(int p, int clr[4]) {
    clr[3] = p % 256; // alpha
    p /= 256;
    clr[2] = p % 256; // blue
    p /= 256;
    clr[1] = p % 256; // green
    clr[0] = p / 256; // red
}

int main() {
    int a, b;
    char c;
    float f;
    int arr[4];

    extractClr((int) &a, arr);

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
    printf("%p", &a);
    puts("");

    return 0;
}