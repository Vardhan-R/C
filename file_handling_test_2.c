#include <stdio.h>
#include <string.h>

int main() {
    FILE* txt_file;
    txt_file = fopen("C:/Users/vrdhn/Desktop/CS/fs.png", "r");

    // char a[10];
    int arr[10];

    for (int i = 0; i < 10; i++) {
        fscanf(txt_file, "%d", &arr[i]);
    }

    fclose(txt_file);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}