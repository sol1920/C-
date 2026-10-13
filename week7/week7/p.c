#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d", *p++); // 10 출력, p는 다음 원소를 가리킴
    printf("%d", *p);
}