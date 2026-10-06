#include <stdio.h>

int main() {
    int n;

    // 자연수 n 입력
    scanf("%d", &n);

    // 증가
    for (int i = 1; i <= (n + 1) / 2; i++) {

        // 별 i개 출력
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 감소
    for (int i = n / 2; i >= 1; i--) {

        // 별 i개 출력
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}