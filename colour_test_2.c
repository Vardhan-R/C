#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"

int main() {
    FILE* txt_file;
    txt_file = fopen("C:/Users/vrdhn/Desktop/CS/test_file_1.txt", "r");

    int width, height;
    // printf("width address: %p\n", &width);
    // printf("height address: %p\n", &height);
    fscanf(txt_file, "%d", &width);
    fscanf(txt_file, "%d", &height);

    for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                char clr[20] = "\033[38;2;";
                char temp[13];
                // if (i == 0 && j == 0) {
                //     printf("i: %p\n", &i);
                //     printf("j: %p\n", &j);
                //     printf("clr: %p\n", &clr);
                //     printf("temp: %p\n", &temp);
                // }
                fscanf(txt_file, "%s", temp);
                strcat(clr, temp);
                printf("%s%c%c", clr, 219, 219);
            }
            puts("");
    }

    fclose(txt_file);

    printf(RESET);

    // char a[] = "\033[38;2;120;";
    // printf("\n%p\n", &a);

    // with a
    // 61FEEB - temp
    // 61FEF8 - clr
    // 61FF00 - a
    // 61FF0C - height
    // 61FF10 - width

    // 61FEF7 - temp (without a)

    return 0;
}