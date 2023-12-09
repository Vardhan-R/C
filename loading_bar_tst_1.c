#include <stdio.h>
#include <unistd.h>

void loadingBar(int total, int current, int barWidth, char *prefix) {
    float progress = (float)current / total;
    int progressLength = barWidth * progress;

    printf("%s[", prefix);  // Move cursor up one line
    for (int i = 0; i < barWidth; ++i) {
        if (i < progressLength) {
            printf("=");
        } else {
            printf(" ");
        }
    }
    printf("] %.2f%%\n", progress * 100);  // Move to the next line
}

int main() {
    int totalIterations = 100;
    int barWidth = 50;

    for (int i = 0; i <= totalIterations; ++i) {
        loadingBar(totalIterations, i, barWidth, "Loading 1: ");
        loadingBar(totalIterations, i, barWidth, "Loading 2: ");
        usleep(100000);  // Sleep for 100 milliseconds (0.1 seconds)
		printf("\033[F\033[F");
    }

    printf("\n\nLoading complete!\n");

    return 0;
}
