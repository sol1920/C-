#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("*p++ = %d\n", *p++);
    printf("*p = %d\n", *p);

    p = arr;

    printf("*++p = %d\n", *++p);
    printf("*p = %d\n", *p);

    return 0;
}