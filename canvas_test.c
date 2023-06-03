// #include <stdio.h>

// int main() {
//     for (int i = 0; i < 30; i++) {
//         for (int j = 0; j < 30; j++) {
//             printf("%c", 219);
//         }
//     }
//     return 0;
// }

#include <stdio.h>

#define RESET "\x1B[0m"
#define BLK "\x1B[30m"
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"

int main() {
    // printf(KRED "red\n");
    // printf(KGRN "green\n");
    // printf("%syellow\n", KYEL);
    // printf("%sblue\n", KBLU);
    // printf("%smagenta\n", KMAG);
    // printf("%scyan\n", KCYN);
    // printf("%swhite\n", KWHT);
    // printf("%snormal\n", KNRM);

    for (int i = 10; i < 100; i++) {
        for (int j = 0; j < 8; j++) {
        // printf(RED "%c%c", 219, 219);
        // printf(GRN "%c%c", 219, 219);
        // printf(BLU "%c%c\n" RESET, 219, 219);
            printf("%d", i);
        // printf(WHT "%c", 219);
        // printf(BLU "%c" RESET, 219);
        }
    }

    return 0;
}