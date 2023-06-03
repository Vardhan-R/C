#include <stdio.h>
#include <string.h>

#define BLK "\033[0;30m"
#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define YLW "\033[0;33m"
#define BLU "\033[0;34m"
#define MAG "\033[0;35m"
#define CYN "\033[0;36m"
#define WHT "\033[0;37m"
#define CLR "\033[38;2;150;150;250m"
#define RESET "\033[0m"

int main() {
    // for (int i = 0; i < 10; i++) {
    //     printf(WHT "%c%c", 219, 219);
    // }
    // printf(RED "%c%c", 219, 219);
    // printf(GRN "%c%c", 219, 219);
    // printf(BLU "%c%c", 219, 219);
    // printf(YLW "%c%c", 219, 219);
    // printf(MAG "%c%c", 219, 219);
    // printf(CYN "%c%c", 219, 219);
    // for (int i = 0; i < 10; i++) {
    //     printf(WHT "%c%c", 219, 219);
    // }

    // printf("\n");

    FILE* txt_file;
    txt_file = fopen("C:/Users/vrdhn/Desktop/CS/test_file_1.txt", "r");
    // txt_file = fopen("test_txt_file_1.txt", "w");

    // char r[3], g[3], b[3];
    // char all_txt[7][15];


    // fprintf(txt_file, "abc def\n");
    // fprintf(txt_file, "lmao qqq xyz");
    int width, height;
    fscanf(txt_file, "%d", &width);
    fscanf(txt_file, "%d", &height);
    // printf("%d %d\n", width, height);
    for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                char clr[] = "\033[38;2;";
                char temp[13];
                fscanf(txt_file, "%s", temp);
                strcat(clr, temp);
                printf(clr);
                printf("%c%c", 219, 219);
            //     if (r < 128) {
            //         if (g < 128) {
            //             if (b < 128) {
            //                 printf(BLK "%c%c", 219, 219);
            //             } else {
            //                 printf(BLU "%c%c", 219, 219);
            //             }
            //         } else {
            //             if (b < 128) {
            //                 printf(GRN "%c%c", 219, 219);
            //             } else {
            //                 printf(CYN "%c%c", 219, 219);
            //             }
            //         }
            //     } else {
            //         if (g < 128) {
            //             if (b < 128) {
            //                 printf(RED "%c%c", 219, 219);
            //             } else {
            //                 printf(MAG "%c%c", 219, 219);
            //             }
            //         } else {
            //             if (b < 128) {
            //                 printf(YLW "%c%c", 219, 219);
            //             } else {
            //                 printf(WHT "%c%c", 219, 219);
            //             }
            //         }
            //     }
            }
            puts("");
        // fscanf(txt_file, "%s", all_txt[i]);
    }
    // fscanf(txt_file, "%s %s %s", str_1, str_2, str_3);

    fclose(txt_file);

    char a[] = "\033[38;2;150;150;";
    // char b[] = "150m";
    // strcat(a, b);

    // printf(a);
    // printf("");

    // for (int i = 0; i < 100; i++) {
    //     printf("%c", 219);
    // }

    // for (int i = 0; i < 2; i++) {
    //     printf("%c", 219);
    //     // printf("\2", i);
    //     // printf("\3", i);
    //     // printf("\4", i);
    //     // printf("\5", i);
    //     // printf("\6", i);
    //     // printf("\7", i);
    //     // printf("\8", i);
    //     // printf("\9", i);
    //     // printf("\10", i);
    //     // printf("\1%s", &all_txt[i]);
    //     // printf("abc\n");
    // }

    printf(RESET);

    return 0;
}