#include <stdio.h>

int main() {
    FILE* fp;

    fp = fopen("test_file_1.txt", "r");

    char str_1[50], str_2[50], str_3[50];
    int n;

    fscanf(fp, "%s%s%d", str_1, str_2, &n);

    printf("%s", str_1);
    printf("%s", str_2);
    printf("%d", n);

    fclose(fp);

    return 0;
}