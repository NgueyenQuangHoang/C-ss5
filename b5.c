#include <stdio.h>

int main() {
    int i, j;

    // In tiêu đề cột
    for (i = 1; i <= 9; i++) {
        printf("Bang %d\t\t", i);
    }
    printf("\n");

    // In các dòng của bảng cửu chương
    for (j = 1; j <= 10; j++) {
        for (i = 1; i <= 9; i++) {
            printf("%d x %d = %2d\t", i, j, i * j);
        }
        printf("\n"); // Dòng trống giữa các dòng của các bảng
    }

    return 0;
}
