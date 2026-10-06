#include <stdio.h>

int main() {
    int n;

    // 자연수 n 입력
    scanf("%d", &n);

    // n줄만큼 반복
    for (int i = 1; i <= n; i++) {

        // i번째 줄에 별을 i개 출력
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // 한 줄 출력이 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}