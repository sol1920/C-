#include <stdio.h>

int main() {
    int n;

    // 자연수 n 입력
    scanf("%d", &n);

    // n부터 1까지 줄어들면서 반복
    for (int i = n; i >= 1; i--) {

        // i개만큼 별 출력
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // 한 줄 출력 후 줄바꿈
        printf("\n");
    }

    return 0;
}