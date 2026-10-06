#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    int i, j, key;

    // 두 번째 원소부터 하나씩 정렬
    for (i = 1; i < n; i++) {

        // 현재 정렬할 값을 저장
        key = arr[i];

        // 현재 값의 바로 앞 위치
        j = i - 1;

        // 앞의 값이 key보다 크면 오른쪽으로 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // key를 알맞은 위치에 삽입
        arr[j + 1] = key;
    }

    // 정렬된 배열 출력
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}